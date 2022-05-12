#include <iomanip>

#include "Customer.h"

// Define the Tab Width for setw
#define TAB_WIDTH 15
using namespace std;

// Here, we provide the full declaration of functions from Customer.h header
// file.
Customer::Customer() {}
Customer::Customer(string Name, string Email, string Mobile, string Address,
                   double Discount) {
  id = generateID("Customer");
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
// Print Customer Information
void Customer::printInfo() {
  cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
  cout << "█ Customer " << id << " Information █\n";
  cout << setw(TAB_WIDTH) << left << "Name : " << name << "\n";
  cout << setw(TAB_WIDTH) << left << "Email : " << email << "\n";
  cout << setw(TAB_WIDTH) << left << "Mobile : " << mobile << "\n";
  cout << setw(TAB_WIDTH) << left << "Address : " << address << "\n";
  cout << setw(TAB_WIDTH) << left << "Discount (%): " << discount << "\n";
};
