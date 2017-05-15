// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
// DEV: We are using `c` prefix due to it being a C library
#include <cstdio>

// Taken from http://web.archive.org/web/20150207073636/http://c.learncodethehardway.org:80/book/ex10.html

// Define our main function
int main()
{
  // Define some sample data
  const int STATES_AMOUNT = 4;
  // DEV: We use `const char` to silence errors about converting strings to `char*`
  //   http://stackoverflow.com/a/16867229
  // DEV: We are generating a 2 dimensional array (i.e. string = array, array of strings = array of arrays)
  const char* states[STATES_AMOUNT] = {
    "California", "Oregon",
    "Washington", "Texas"
  };

  // Output our data
  for (int i = 0; i < STATES_AMOUNT; i++) {
    printf("State: %s\n", states[i]);
  }
}
