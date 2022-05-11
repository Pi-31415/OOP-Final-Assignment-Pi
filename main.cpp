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
  person1.printInfo();
  return 0;
}