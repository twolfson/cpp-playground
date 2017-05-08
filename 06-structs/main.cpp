// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>

// Set up using `std` namespace by default
using namespace std;

// Define a struct
struct List {
  int size;
  double* elem;
};

// Define helper functions

// Define our main function
int main()
{
  // Create an example struct
  List list;
  list.size = 2;
  list.elem = new double[2] {20, 50};

  // Output info
  cout << list.size << " " << list.elem[0] << " " << list.elem[1] << "\n";
}
