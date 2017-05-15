// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
// DEV: We are using `c` prefix due to it being a C library
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Taken from http://web.archive.org/web/20150207100809/http://c.learncodethehardway.org:80/book/ex16.html
// DEV: This exercise is based on C, not C++ so we are doing structs and constructors/destructors

// Define our struct and its constructors
struct Person {
  char* name;
  int age;
};

struct Person* Person_create(char* name, int age) {
  // Create our person
  // DEV: Due to using C++, we need to cast `malloc`
  struct Person* person = (Person*)malloc(sizeof(struct Person));

  // Verify we had enough memory for our person
  assert(person != NULL);

  // Save our info to the person
  person->name = strdup(name);
  person->age = age;

  // Return our person
  return person;
}

// DEV: We use a `*` for the pointer then a `&` to persist a reference so we can update the pointer to NULL
void Person_destroy(struct Person*& person) {
  // Verify we aren't deleting a null pointer
  assert(person != NULL);

  // Release our name pointer and person pointer itself
  free(person->name);
  free(person);

  // Update our person by reference to NULL
  person = NULL;
}

void Person_print(struct Person* person) {
  // Verify we aren't handling a null pointer
  assert(person != NULL);

  // Output our person's info
  printf("Name: %s\n", person->name);
  printf("  Age: %d\n", person->age);
}

// Define our main function
int main()
{
  // Define our people
  struct Person *joe = Person_create("Joe", 32);
  struct Person *frank = Person_create("Frank", 20);

  // Output info about the people
  printf("Joe is at memory location: %p\n", joe);
  Person_print(joe);
  printf("\n");
  printf("Frank is at memory location: %p\n", frank);
  Person_print(frank);
  printf("\n");

  // Modify our person's info
  joe->age += 20;
  Person_print(joe);
  printf("\n");
  frank->age += 20;
  Person_print(frank);
  printf("\n");

  // Free up our people
  Person_destroy(joe);
  Person_destroy(frank);

  // Attempt to output our person's info again
  Person_print(joe);

  // Exit our program
  return 0;
}
