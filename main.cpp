#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// Import required headers and libraries
#include "Person.h"

int main() {

  // create object
  Person person1("Pi Ko", "pk2269@nyu.edu", "987654321");
  cout << person1.getID() << endl;
  cout << person1.getEmail() << endl;
  cout << person1.getMobile() << endl;
  cout << person1.getName() << endl;
  person1.setName("Silvey");
  cout << person1.getName() << endl;
  return 0;
}