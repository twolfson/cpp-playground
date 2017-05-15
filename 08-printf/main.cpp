// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
// DEV: We are using `c` prefix due to it being a C library
#include <cstdio>

// Define our main function
int main()
{
  char name[] = "World";
  printf("Hello %s\n", name);

  char name2[] = {'W', 'o', 'r', 'l', 'd', '\0'};
  printf("Hello %s\n", name2);
}
