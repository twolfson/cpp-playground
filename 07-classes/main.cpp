// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>

// Set up using `std` namespace by default
using namespace std;

// Define a class
// DEV: We could use `_size` and similar for class properties
//   but `this->` is much more clear
class List {
public:
  List(int size) {
    this->size = size;
    this->elem = new double[size];
  };

  int size = 0;
  double* elem = NULL;

  double& operator[] (int index) {
    return this->elem[index];
  };
};

// Define our main function
int main()
{
  // Create an example class
  List list(2);
  list[0] = 20;
  list[1] = 30;
  cout << list.size << " " << list[0] << " " << list[1] << "\n";
}
