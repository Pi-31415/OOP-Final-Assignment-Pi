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
  // Customer person1("Pi Ko", "pk2269@nyu.edu", "987654321", "NYUAD", 40);
  CustomerList c1;
  c1.addCustomer("Pi Ko", "pk229@nyu.edu", "987654321", "NYUAD", 40);
  c1.addCustomer("Akira", "pk229@nyu.edu", "987654321", "NYUAD", 40);
  c1.addCustomer("Silvey", "pk229@nyu.edu", "987654321", "NYUAD", 40);
  c1.printInfo();
  int menu = 0;
  while (true) {
    getIntegerVariable(menu, "Menu");
    if (menu == 0) {
      c1.addCustomer();
      c1.printInfo();
    } else {
      string name;
      getStringVariable(name, "ID to delete");
      c1.removeCustomer(name);
      c1.printInfo();
      // break;
    }
  }

  return 0;
}