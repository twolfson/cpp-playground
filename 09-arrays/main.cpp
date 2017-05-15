// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
// DEV: We are using `c` prefix due to it being a C library
#include <cstdio>

// Taken from http://web.archive.org/web/20150207073636/http://c.learncodethehardway.org:80/book/ex10.html

// Define our main function
int main()
{
  // Define some numeric sample data
  const int PRIMES_AMOUNT = 4;
  const int primes[PRIMES_AMOUNT] = {2, 3, 5, 7};

  // Output our data
  for (int i = 0; i < PRIMES_AMOUNT; i++) {
    printf("Prime: %d\n", primes[i]);
  }

  // Define some string sample data
  const int STATES_AMOUNT = 4;
  // DEV: We use `const char` to silence errors about converting strings to `char*`
  //   http://stackoverflow.com/a/16867229
  // DEV: We are generating a 2 dimensional array (i.e. string = array, array of strings = array of arrays)
  // DEV: Technically `char *` is not preferred for strings
  //   (i.e. we want `char[]` so we can refer to entirety, not head character)
  //   but these strings are dynamic length so nested array syntax wouldn't work
  const char* states[STATES_AMOUNT] = {
    "California", "Oregon",
    "Washington", "Texas"
  };

  // Output our data
  for (int i = 0; i < STATES_AMOUNT; i++) {
    printf("State: %s\n", states[i]);
    printf("State (ptr+n): %s\n", states[i]+2);
    printf("State (char): %c\n", states[i][0]);
  }

  // Define a nested array
  int nested_array[2][2] = {{2, 3}, {5, 7}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("Nested value: %d\n", nested_array[i][j]);
    }
  }
}
