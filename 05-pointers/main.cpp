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
  char* foo_2_ptr = &foo[2];
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
  char* foo_2_ptr2 = foo_2_ptr;
  *foo_2_ptr2 = 'y';
  cout << "Updated pointer2: " << foo << "\n";

  char bar = 'm';
  cout << "Dereference address: " << *&bar << "\n";

  char baz = bar;
  baz = 'n';
  cout << "Pass by value: " << bar << ", " << baz << "\n";

  char& bzz = bar;
  bzz = 'o';
  cout << "Reference: " << bar << ", " << bzz << "\n";

  // Null pointers
  cout << "Boolean: " << (*(foo_2_ptr+20) == NULL) << "\n";
  // DEV: This doesn't seem to work =/
  cout << "Boolean: " << ((foo_2_ptr+20) == nullptr) << "\n";
}
