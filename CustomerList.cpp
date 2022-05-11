#include "CustomerList.h"
#include "Customer.h"
#include "Functions.h"
#include <iomanip>

using namespace std;
// Define the Tab Width for setw
#define TAB_WIDTH 12

CustomerList::CustomerList(){};

// This adds a new Customer instance to the list container

void CustomerList::addCustomer() {
  string name, email, mobile, address;
  double discount;
  getStringVariable(name, "Please insert name");
  getStringVariable(email, "Please insert email");
  getStringVariable(mobile, "Please insert mobile");
  getStringVariable(address, "Please insert address");
  getDoubleVariable(discount, "Please enter discount %");
  Customer p1(name, email, mobile, address, discount);
  // Customer p2("PIEE22", "pk2269", "98765", "NYU", 40);
  Customers.push_back(p1);
}

// This removes the customer with the specific ID
void CustomerList::removeCustomer(string ID) { cout << "Removing"; };
//   This prints out the information of all customers, in a tabular format
void CustomerList::printInfo() {
  // First Print Headers
  cout << "| ";
  cout << setw(TAB_WIDTH - 5) << left << "ID"
       << " | ";
  cout << setw(TAB_WIDTH) << left << "Name"
       << " | ";
  cout << setw(TAB_WIDTH) << left << "Email"
       << " | ";
  cout << setw(TAB_WIDTH) << left << "Mobile"
       << " | ";
  cout << setw(TAB_WIDTH) << left << "Address"
       << " | ";
  cout << setw(TAB_WIDTH) << left << "Discount %"
       << "| \n";
  list<Customer>::iterator it;
  // Print Data
  for (it = Customers.begin(); it != Customers.end(); ++it) {
    cout << "| ";
    cout << setw(TAB_WIDTH - 5) << left << it->getID() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getName() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getEmail() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getMobile() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getAddress() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getDiscount() << "| \n";
  }
};