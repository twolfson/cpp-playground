// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>

// Set up using `std` namespace by default
using namespace std;

// Declare some constants and expressions
// DEV: We can only use `constexpr` with C++11
const int foo = 127;
const int bar = foo * 20;

// Define our main function
int main()
{
  cout << bar;
}
