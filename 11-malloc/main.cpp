// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
// DEV: We are using `c` prefix due to it being a C library
#include <cassert>
#include <cstdio>
#include <cstring>

// Taken from http://web.archive.org/web/20150207100809/http://c.learncodethehardway.org:80/book/ex16.html
// DEV: This exercise is based on C, not C++ so we are doing structs and constructors/destructors

// Define our struct and its constructors
struct Person {
  char* name;
  int age;
}

struct Person* Person_create(char* name, int age) {
  // Create our person
  struct Person *person = malloc(sizeof(struct Person));

  // Verify we had enough memory for our person
  assert(person != NULL);

  // Save our info to the person
  person->name = strdup(name);
  person->age = strdup(age);

  // Return our person
  return person;
}

void Person_destroy(struct Person *person) {
  // Verify we aren't deleting a null pointer
  assert(person != NULL);

  // Release our name pointer and person pointer itself
  free(person->name);
  free(person);
}

// Define our main function
int main()
{
  // Define our people
  struct Person *joe = Person_create("Joe", 32);
  struct Person *frank = Person_create("Frank", 20);

  // TODO: Output info about the people

  // Exit our program
  return 0;
}
