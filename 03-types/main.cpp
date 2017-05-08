// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>

// Set up using `std` namespace by default
using namespace std;

// Define our main function
int main()
{
  // Declare various types of variables
  bool foo_bool = true;
  char foo_char = 'a';
  int foo_int = 128;
  double foo_double = 1.23;
  unsigned foo_unsigned = 500;

  // Output info about our variables
  cout << "Values\n";
  cout << foo_bool << "\n";
  cout << foo_char << "\n";
  cout << foo_int << "\n";
  cout << foo_double << "\n";
  cout << foo_double_alt_syntax << "\n";
  cout << foo_unsigned << "\n";
  cout << "\n";

  // Output other info
  cout << "Sizes\n";
  cout << sizeof(foo_bool) << "\n";
  cout << sizeof(foo_char) << "\n";
  cout << sizeof(foo_int) << "\n";
  cout << sizeof(foo_double) << "\n";
  cout << sizeof(foo_unsigned) << "\n";
}
