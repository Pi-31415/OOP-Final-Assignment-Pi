#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// Import required headers and libraries
#include "Functions.h"
#include "Person.h"

int main() {
  // create object
  Person person1("Pi Ko", "pk2269@nyu.edu", "987654321");
  cout << person1.getID() << endl;
  cout << person1.getEmail() << endl;
  cout << person1.getMobile() << endl;
  cout << person1.getName() << endl;
  person1.setName("1234");
  person1.setEmail("asdf@nyu.edu");
  person1.setMobile("324234");

  cout << person1.getID() << endl;
  cout << person1.getEmail() << endl;
  cout << person1.getMobile() << endl;
  cout << person1.getName() << endl;

  int a = 0;
  getIntegerVariable(a, "Enter a");
  cout << a;
  return 0;
}