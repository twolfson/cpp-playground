// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>

// Set up using `std` namespace by default
using namespace std;

// Define a struct
class List {
public:
  List(int size) {
    _size = size;
    _elem = new double[size];
  };

  int _size = 0;
  double* _elem = NULL;

  double& operator[] (int index) {
    return _elem[index];
  };
};

// Define our main function
int main()
{
  // Create an example class
  List list(2);
  list[0] = 20;
  list[1] = 30;
  cout << list._size << " " << list[0] << " " << list[1] << "\n";
}
