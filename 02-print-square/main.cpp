// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>

// Set up using `std` namespace by default
using namespace std;

// Define helper functions
double square(double x)
{
  return x*x;
}

void print_square(double x)
{
  cout << "The square of \"" << x << "\" is \"" << square(x) << "\"\n";
}

// Define our main function
int main()
{
  print_square(1.234);
}
