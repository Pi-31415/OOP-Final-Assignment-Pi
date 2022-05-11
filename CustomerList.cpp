#include "CustomerList.h"
#include "Customer.h"
#include "Functions.h"
#include <iomanip>

using namespace std;
// Define the Tab Width for setw
#define TAB_WIDTH 13

// Reference :
// https://stackoverflow.com/questions/16445358/stdfind-object-by-member
struct person_has_name {
  person_has_name(std::string const &n) : name(n) {}
  bool operator()(Customer const &p) { return p.id == name; }

private:
  std::string name;
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
  // Reference :
  // https://stackoverflow.com/questions/16445358/stdfind-object-by-member
  std::string name = "";
  getStringVariable(name, "Input name to search");
  std::list<Customer>::iterator result = Customers.begin();

  result =
      std::find_if(Customers.begin(), Customers.end(), person_has_name(name));

  result->printInfo();
  Customers.erase(result);
}
//   This prints out the information of all customers, in a tabular format
void CustomerList::printInfo() {
  // First Print Headers
  cout << "\n__________________________________________________________________"
          "__"
          "______________________________";
  cout << "\n| ";
  cout << setw(5) << left << "#";
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
  int counter = 0;
  for (it = Customers.begin(); it != Customers.end(); ++it) {
    counter++;
    cout << "| ";
    cout << setw(5) << left << counter;
    cout << "| ";
    cout << setw(TAB_WIDTH - 5) << left << it->getID() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getName() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getEmail() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getMobile() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getAddress() << " | ";
    cout << setw(TAB_WIDTH) << left << it->getDiscount() << "| \n";
  }
  // Print closing line
  cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾"
          "‾‾‾‾‾‾"
          "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
};