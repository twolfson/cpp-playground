// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>
#include <stdexcept>

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

  double& get (int index) {
    if (index < 0 || index >= this->size) {
      throw out_of_range("Requested index outside of size");
    }
    return this->elem[index];
  };
  double& operator[] (int index) {
    return this->get(index);
  };

  void increment (int index) {
    double& val_ref = this->get(index);
    val_ref += 1;
  }
};

// Define our main function
int main()
{
  // Create an example class
  List list(2);
  list[0] = 20;
  list[1] = 30;
  cout << list.size << " " << list[0] << " " << list[1] << "\n";
  list.increment(1);
  cout << list[1] << "\n";
  list[20];
}
