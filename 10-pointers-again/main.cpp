// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
// DEV: We are using `c` prefix due to it being a C library
#include <cassert>
#include <cstdio>

// Taken from http://web.archive.org/web/20150207100805/http://c.learncodethehardway.org:80/book/ex15.html

// Define our main function
int main()
{
  // Define some sample data
  const int LENGTH = 5;
  int ages[LENGTH] = {23, 43, 12, 89, 2};
  char* names[LENGTH] = {
    "Alan", "Frank",
    "Mary", "John", "Lisa"
  };

  // Resolve our variables for looping
  // DEV: We could use `sizeof` as the exercise demonstrates
  //   but it's inaccurate for items that take up more than 1 byte
  //   (i.e. it increments by 1 byte but we might want 2 bytes)
  int i;

  // Access our items via indexes
  for (i = 0; i < LENGTH; i++) {
    printf("%s has %d years alive.\n",
      names[i], ages[i]);
  }
  printf("---\n");

  // Access our items via pointers with offset
  int* current_age_ptr = ages;
  char** current_name_ptr = names;
  for (i = 0; i < LENGTH; i++) {
    printf("%s has %d years alive.\n",
      *(current_name_ptr+i), *(current_age_ptr+i));
  }
  printf("---\n");

  // Access our items via pointers with array indicies
  // DEV: I'd prefer to avoid this as I think `[]` is a magic operator for this case
  for (i = 0; i < LENGTH; i++) {
    printf("%s has %d years alive.\n",
      current_name_ptr[i], current_age_ptr[i]);
  }
  printf("---\n");

  // Access our items via pointers as iterators
  // DEV: We use `current_age_ptr` as comparator against `LENGTH` as `names` doesn't have a simple length
  for (current_name_ptr = names, current_age_ptr = ages;
       current_age_ptr < ages + LENGTH;
       current_name_ptr++, current_age_ptr++) {
    assert(current_name_ptr < names + LENGTH);
    assert(current_age_ptr < ages + LENGTH);
    printf("%s has %d years alive.\n",
      *current_name_ptr, *current_age_ptr);
  }

  // Exit our program
  return 0;
}
