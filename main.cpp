#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// Import required headers and libraries
#include "Customer.h"
#include "CustomerList.h"
#include "Functions.h"

int main() {
  // create object
  Customer person1("Pi Ko", "pk2269@nyu.edu", "987654321", "NYUAD", 40);
  CustomerList c1;
  c1.addCustomer();
  c1.printInfo();
  c1.addCustomer();
  c1.printInfo();
  c1.addCustomer();
  c1.printInfo();
  c1.addCustomer();
  c1.printInfo();
  return 0;
}