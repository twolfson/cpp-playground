// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>

// Set up using `std` namespace by default
using namespace std;

// Define our main function
int main()
{
  // Declare an array to reference
  char foo[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
  //   c
  cout << foo[2] << "\n";

  // Explore pointers/addresses
  char *foo_2_ptr = &foo[2];
  // DEV: We get `cdef` when outputting the ptr
  //     due to it iterating until it hits a null terminator (i.e. `\x00`) at end of array
  //   cdef
  cout << "ptr: " << foo_2_ptr << "\n";
  //   c
  cout << "*ptr: " << *foo_2_ptr << "\n";
  //   0x7fffc814dbf8
  cout << "&ptr: " << &foo_2_ptr << "\n";
  //   d
  cout << "*ptr+1: " << *(foo_2_ptr+1) << "\n";

  // References
  *foo_2_ptr = 'x';
  cout << "Updated pointer: " << foo << "\n";

  char bar = 'm';
  cout << "Dereference address: " << *&bar << "\n";

  char baz = bar;
  baz = 'n';
  cout << "Pass by value: " << bar << ", " << baz << "\n";
}
