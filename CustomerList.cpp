#include "CustomerList.h"
#include "Customer.h"
#include "Functions.h"
#include <iomanip>

using namespace std;
// Define the Tab Width for setw
#define TAB_WIDTH 12

// Below code is for finding object in the list, by functor predicate and
// std::find_if. Reference :
// https://stackoverflow.com/questions/16445358/stdfind-object-by-member
struct findByID {
  findByID(string const &n) : query(n) {}
  bool operator()(Customer const &p) { return p.id == query; }

private:
  string query;
};

CustomerList::CustomerList(){};

// This adds a new Customer instance to the list container
// This function is for manual user input
void CustomerList::addCustomer() {
  string name, email, mobile, address;
  double discount;
  getStringVariable(name, "Name");
  getStringVariable(email, "Email");
  getStringVariable(mobile, "Mobile");
  getStringVariable(address, "Address");
  getDoubleVariable(discount, "Discount %");
  Customer temporary(name, email, mobile, address, discount);
  Customers.push_back(temporary);
}
// Function overloading for paramaterization. This can be called to record the
// customer info programatically
void CustomerList::addCustomer(string name, string email, string mobile,
                               string address, double discount) {
  Customer temporary(name, email, mobile, address, discount);
  Customers.push_back(temporary);
}
// This removes the customer with the specific ID
void CustomerList::removeCustomer(string ID) {
  // Below code is for finding object in the list, by functor predicate and
  // std::find_if. Reference :
  // https://stackoverflow.com/questions/16445358/stdfind-object-by-member
  try {
    list<Customer>::iterator result = Customers.begin();
    result = find_if(Customers.begin(), Customers.end(), findByID(ID));
    // If the result is from random memory addresses, reject the finding result
    if (result->getFaultHandler() != 100) {
      throw(0);
    } else {
      Customers.erase(result);
    }
  } catch (...) {
    cout << "[Error] Could not remove customer with ID " << ID << ".\n";
  }
}

// This prints out a particular customer's information from their ID
void CustomerList::getCustomerInfo(string ID) {
  try {
    list<Customer>::iterator result = Customers.begin();
    result = find_if(Customers.begin(), Customers.end(), findByID(ID));
    // If the result is from random memory addresses, reject the finding result
    if (result->getFaultHandler() != 100) {
      throw(0);
    } else {
      result->printInfo();
    }
  } catch (...) {
    cout << "[Error] Could not find customer with ID " << ID << ".\n";
  }
}

// This prints out a particular customer's discount from their ID
double CustomerList::getCustomerDiscount(string ID) {
  try {
    list<Customer>::iterator result = Customers.begin();
    result = find_if(Customers.begin(), Customers.end(), findByID(ID));
    // If the result is from random memory addresses, reject the finding result
    if (result->getFaultHandler() != 100) {
      throw(0);
    } else {
      return result->getDiscount();
    }
  } catch (...) {
    cout << "[Error] Could not find customer with ID " << ID << ".\n";
    return 0;
  }
}

//   This prints out the information of all customers, in a tabular format
void CustomerList::printInfo() {
  try {
    // First Print Headers
    cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
    cout << "█ CURRENT CUSTOMERS IN SYSTEM █";
    cout
        << "\n█████████████████████████████████████████████████████████████████"
           "████████████████████████████████";
    cout << "\n█ ";
    cout << setw(5) << left << "#";
    cout << "█ ";
    cout << setw(TAB_WIDTH) << left << "ID"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Name"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Email"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Mobile"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Address"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Discount %"
         << "█ \n";
    list<Customer>::iterator it;
    // Print Data
    int counter = 0;
    for (it = Customers.begin(); it != Customers.end(); ++it) {
      counter++;
      cout << "█ ";
      cout << setw(5) << left << counter;
      cout << "█ ";
      cout << setw(TAB_WIDTH) << left << it->getID() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getName() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getEmail() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getMobile() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getAddress() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getDiscount() << "█ \n";
    }
    // Print closing line
    cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
            "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
  } catch (...) {
    cout << "[Error] Could not print customer information.\n";
  }
};