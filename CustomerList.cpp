#include "CustomerList.h"
#include "Customer.h"

using namespace std;

CustomerList::CustomerList(){};

// This adds a new Customer instance to the list container

void CustomerList::addCustomer() {
  Customer p1("PIEE", "pk2269", "98765", "NYU", 40);
  Customer p2("PIEE22", "pk2269", "98765", "NYU", 40);
  Customers.push_back(p1);
  Customers.push_back(p2);
}

// This removes the customer with the specific ID
void CustomerList::removeCustomer(string ID) { cout << "Removing"; };
//   This prints out the information of all customers, in a tabular format
void CustomerList::printInfo() {
  list<Customer>::iterator it;
  for (it = Customers.begin(); it != Customers.end(); ++it)
    it->printInfo();
};