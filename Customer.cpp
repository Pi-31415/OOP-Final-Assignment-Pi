#include "Customer.h"

using namespace std;

// Here, we provide the full declaration of functions from Customer.h header
// file.
Customer::Customer() {}
Customer::Customer(string Name, string Email, string Mobile, string Address,
                   double Discount) {
  id = generateID("Person");
  name = Name;
  email = Email;
  mobile = Mobile;
  address = Address;
  discount = Discount;
};

// Getters
string Customer::getAddress() { return address; };
double Customer::getDiscount() { return discount; };
// Declare Setters
void Customer::setAddress(const string value) { address = value; };
void Customer::setDiscount(const double value) { discount = value; };
