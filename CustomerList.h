#ifndef CUSTOMER_LIST_H
#define CUSTOMER_LIST_H

#include "Customer.h"
#include "Functions.h"

#include <algorithm>
#include <iterator>
#include <list>
using namespace std;

class CustomerList {
private:
  list<Customer> Customers;

public:
  //   Default Constructor
  CustomerList();
  // This adds a new Customer instance to the list container
  void addCustomer();
  // This removes the customer with the specific ID
  void removeCustomer(string ID);
  //   This prints out the information of all customers
  void printInfo();
};

#endif