// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
// DEV: We are using `c` prefix due to it being a C library
#include <cstdio>

// Taken from http://web.archive.org/web/20150207073636/http://c.learncodethehardway.org:80/book/ex10.html

// Define our main function
int main()
{
  const int STATES_AMOUNT = 4;
  char* states[STATES_AMOUNT] = {
    "California", "Oregon",
    "Washington", "Texas"
  };

  for (int i = 0; i < STATES_AMOUNT; i++) {
    printf("State: %s\n", states[i]);
  }
}
