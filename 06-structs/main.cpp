// Load in our dependencies
// DEV: We use </> instead of quotes due to it being stdlib
#include <iostream>

// Set up using `std` namespace by default
using namespace std;

// Define a struct
struct List {
  int size = 0;
  double* elem = NULL;
};

// Define helper functions
void update_struct_by_value(List list)
{
  list.size = 3;
  list.elem = new double[3] {1, 2, 3};
}
void update_struct_by_reference(List& list)
{
  list.size = 3;
  list.elem = new double[3] {1, 2, 3};
}
void update_struct_by_pointer(List* list_ptr)
{
  list_ptr->size = 3;
  list_ptr->elem = new double[3] {1, 2, 3};
}

// Define our main function
int main()
{
  // Create an example struct
  List list;
  list.size = 2;
  list.elem = new double[2] {20, 50};

  // Output info
  //   2 20 50
  cout << list.size << " " << list.elem[0] << " " << list.elem[1] << "\n";

  // Try out our different updates
  //   No updates to struct (i.e. 0)
  List list_by_value;
  update_struct_by_value(list_by_value);
  cout << list_by_value.size << "\n";

  //   Updates struct (i.e. 3)
  List list_by_reference;
  update_struct_by_reference(list_by_reference);
  cout << list_by_reference.size << "\n";

  //   Updates struct (i.e. 3), requires different syntax
  List list_by_pointer;
  update_struct_by_pointer(&list_by_pointer);
  cout << list_by_pointer.size << "\n";
}
