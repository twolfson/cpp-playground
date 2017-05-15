// Load in our dependencies
#include <iostream>
#include <stdexcept>

// TODO: Break up into separate files
// TODO: Write up tests

// Define our classes
class Node {
public:
  int val;
  Node* next;

  Node(int val, Node* next) {
    this->val = val;
    this->next = next;
  }
  ~Node() {
    // TODO: What is `[]` syntax for?
    // TODO: Try out a unique pointer instead of destructor
    delete this->next;
  }
};

class LinkedList {
public:
  Node* head = NULL;

  LinkedList() {
  };
  ~LinkedList() {
    // TODO: What is `[]` syntax for?
    // TODO: Try out a unique pointer instead of destructor
    delete this->head;
  }

  void push(int val) {
    // TODO: Use a template for dynamic node types
  }
};

// Define our main function
int main()
{
  // Create an example class
  LinkedList list;
}
