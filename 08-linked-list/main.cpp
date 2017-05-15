// Load in our dependencies
#include <iostream>
#include <stdexcept>

// TODO: Break up into separate files
// TODO: Write up tests

// Define our classes
class Node {
  int val;
  Node* next;

  Node(int val, Node* next) {
    this->val = val
    this->next = next;
  }
  ~Node() {
    // TODO: What is `[]` syntax for?
    // TODO: Try out a unique pointer instead of destructor
    delete this->val;
    delete this->next;
  }
}

class LinkedList {
public:
  Node* head = NULL;

  LinkedList() {
    this->size = size;
    this->elem = new double[size];
  };
  ~LinkedList() {
    delete[] this->elem;
  }

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
  LinkedList list;
  list[0] = 20;
  list[1] = 30;
  cout << list.size << " " << list[0] << " " << list[1] << "\n";
  list.increment(1);
  cout << list[1] << "\n";
  list[20];
}
