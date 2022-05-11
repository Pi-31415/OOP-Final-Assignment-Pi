#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// Import required headers and libraries
#include "Customer.h"
#include "Functions.h"

int main() {
  // create object
  Customer person1("Pi Ko", "pk2269@nyu.edu", "987654321", "NYUAD", 40);
  cout << person1.getID() << endl;
  cout << person1.getEmail() << endl;
  cout << person1.getMobile() << endl;
  cout << person1.getName() << endl;
  person1.setName("1234");
  person1.setEmail("asdf@nyu.edu");
  person1.setMobile("324234");
  cout << person1.getAddress() << endl;
  cout << person1.getDiscount() << endl;
  person1.setDiscount(3);

  cout << person1.getID() << endl;
  cout << person1.getEmail() << endl;
  cout << person1.getMobile() << endl;
  cout << person1.getName() << endl;

  cout << person1.getAddress() << endl;
  cout << person1.getDiscount() << endl;

  // int a = 0;
  // getIntegerVariable(a, "Enter a");
  // cout << a;

  // double b = 0;
  // getDoubleVariable(b, "Enter b");
  // cout << b;
  return 0;
}