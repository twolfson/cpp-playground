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
    printf("%s has %d years alive.\n", names[i], ages[i]);
  }
  printf("---\n");

  // Access our items via pointers
  int* current_age_ptr = ages;
  char** current_name_ptr = names;
  for (i = 0; i < LENGTH; i++) {

  }
}
