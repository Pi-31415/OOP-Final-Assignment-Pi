#include "FoodDeliveryDatabase.h"
#include "Functions.h"
#include "Order.h"
#include <iomanip>

using namespace std;
// Define the Tab Width for setw
#define TAB_WIDTH 12

// Below code is for finding object in the list, by functor predicate and
// std::find_if. Reference :
// https://stackoverflow.com/questions/16445358/stdfind-object-by-member
struct findByID {
  findByID(string const &n) : query(n) {}
  bool operator()(Order const &p) { return p.id == query; }

private:
  string query;
};

FoodDeliveryDatabase::FoodDeliveryDatabase(){};

// This adds a new Order instance to the list container
// Function overloading for paramaterization. This can be called to record the
// Order info programatically
void FoodDeliveryDatabase::addOrder(string OrderItems, string customer,
                                    string deliveryman, double totalPrice) {
  Order temporary(OrderItems, customer, deliveryman, totalPrice, "Incomplete");
  OrderDatabase.push_back(temporary);
}
// This removes the Order with the specific ID
void FoodDeliveryDatabase::removeOrder(string ID) {
  // Below code is for finding object in the list, by functor predicate and
  // std::find_if. Reference :
  // https://stackoverflow.com/questions/16445358/stdfind-object-by-member
  try {
    list<Order>::iterator result = OrderDatabase.begin();
    result = find_if(OrderDatabase.begin(), OrderDatabase.end(), findByID(ID));
    if (result->getFaultHandler() != 100) {
      throw(0);
    } else {
      OrderDatabase.erase(result);
    }
  } catch (...) {
    cout << "[Error] Could not find order with ID " << ID << ".\n";
  }
}

// This marks an order as complete
// This removes the Order with the specific ID
void FoodDeliveryDatabase::markAsComplete(string ID) {
  // Below code is for finding object in the list, by functor predicate and
  // std::find_if. Reference :
  // https://stackoverflow.com/questions/16445358/stdfind-object-by-member
  try {
    list<Order>::iterator result = OrderDatabase.begin();
    result = find_if(OrderDatabase.begin(), OrderDatabase.end(), findByID(ID));
    if (result->getFaultHandler() != 100) {
      throw(0);
    } else {
      Order temporary(result->getItems(), result->getCustomer(),
                      result->getDeliveryMan(), result->getTotalPrice(),
                      "Delivered");
      OrderDatabase.push_back(temporary);
      OrderDatabase.erase(result);
    }
  } catch (...) {
    cout << "[Error] Could not find order with ID " << ID << ".\n";
  }
}
//   This prints out the information of all Orders, in a tabular format
void FoodDeliveryDatabase::printInfo() {
  // First Print Headers
  try {
    cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
    cout << "█ Current Orders █";
    cout << "\n████████████████████████████████████████████████████████████████"
            "███████████████████████████████"
            "████████████████████████████████████████";
    cout << "\n█ ";
    cout << setw(5) << left << "#";
    cout << "█ ";
    cout << setw(TAB_WIDTH) << left << "ID"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Customer ID"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Deliverer"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Status"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Price (AED)"
         << " █ ";
    cout << setw(50) << left << "Items"
         << "█ \n";
    list<Order>::iterator it;
    // Print Data
    int counter = 0;
    for (it = OrderDatabase.begin(); it != OrderDatabase.end(); ++it) {
      counter++;
      cout << "█ ";
      cout << setw(5) << left << counter;
      cout << "█ ";
      cout << setw(TAB_WIDTH) << left << it->getID() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getCustomer() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getDeliveryMan() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getStatus() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getTotalPrice() << " █ ";
      cout << setw(50) << left << it->getItems() << "█ \n";
    }
    // Print closing line

    cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
            "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
            "▀▀"
            "▀\n";
  } catch (...) {
    cout << "[Error] Could not print Order information.\n";
  }
};