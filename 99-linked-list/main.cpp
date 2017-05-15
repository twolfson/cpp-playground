// Load in our dependencies
#include <iostream>
#include <stdexcept>

// Based on
//   https://github.com/gcc-mirror/gcc/blob/gcc-7_1_0-release/libstdc%2B%2B-v3/include/bits/stl_list.h#L250-L257
//   http://www.cplusplus.com/reference/list/list/begin/

// TODO: Break up into separate files
// TODO: Write up tests

// Define our classes
class Node {
public:
  int val;
  Node* next = NULL;

  Node(int val) {
    this->val = val;
  }
  Node(int val, Node* next) {
    this->val = val;
    this->next = next;
  }
  ~Node() {
    // TODO: What is `[]` syntax for?
    // TODO: Try out a unique pointer instead of destructor
    delete this->next;
  }

  // When we are dereferenced, return our value
  int operator*() {
    return this->val;
  }

  // When we want to move to the next node, return a point to the next one
  Node* operator++() {
    return this->next;
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
    // delete this->head;
  }

  Node* begin() {
    return this->head;
  }

  void push_start(int& val) {
    // TODO: Use a template for dynamic node types
    if (this->head == NULL) {
      this->head = Node(val);
    } else {
      Node& old_head = this->head;
      this->head = Node(val, old_head);
    }
  }
};

// Define our main function
int main()
{
  // Create an example class
  LinkedList list;
  std::cout << list.begin();
}
