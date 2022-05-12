#include "ItemList.h"
#include "Functions.h"
#include "Item.h"
#include <iomanip>

using namespace std;
// Define the Tab Width for setw
#define TAB_WIDTH 12

// Below code is for finding object in the list, by functor predicate and
// std::find_if. Reference :
// https://stackoverflow.com/questions/16445358/stdfind-object-by-member
struct findByID {
  findByID(string const &n) : query(n) {}
  bool operator()(Item const &p) { return p.id == query; }

private:
  string query;
};

ItemList::ItemList(){};

// This adds a new Item instance to the list container
// This function is for manual user input
void ItemList::addItem() {
  string name;
  double price;
  getStringVariable(name, "Name");
  getDoubleVariable(price, "Price (AED)");
  Item temporary(name, price);
  ItemDatabase.push_back(temporary);
}
// Function overloading for paramaterization. This can be called to record the
// Item info programatically
void ItemList::addItem(string name, double price) {
  Item temporary(name, price);
  ItemDatabase.push_back(temporary);
}
// This removes the Item with the specific ID
void ItemList::removeItem(string ID) {
  // Below code is for finding object in the list, by functor predicate and
  // std::find_if. Reference :
  // https://stackoverflow.com/questions/16445358/stdfind-object-by-member
  try {
    list<Item>::iterator result = ItemDatabase.begin();
    result = find_if(ItemDatabase.begin(), ItemDatabase.end(), findByID(ID));
    if (result->getFaultHandler() != 100) {
      throw(0);
    } else {
      ItemDatabase.erase(result);
    }
  } catch (...) {
    cout << "[Error] Could not find item with ID " << ID << ".\n";
  }
}

// This prints out a particular Item's price from their ID
double ItemList::getItemPrice(string ID) {
  try {
    list<Item>::iterator result = ItemDatabase.begin();
    result = find_if(ItemDatabase.begin(), ItemDatabase.end(), findByID(ID));

    if (result->getFaultHandler() != 100) {
      throw(0);
    } else {
      return result->getPrice();
    }
  } catch (...) {
    cout << "[Error] Could not find item with ID " << ID << ".\n";
    return 0;
  }
}

// This calculates the total price (without discount), for particular item
// list
double ItemList::calculateTotalPrice() {
  try {
    list<Item>::iterator it;
    // calculate total price
    double totalPrice = 0;
    for (it = ItemDatabase.begin(); it != ItemDatabase.end(); ++it) {
      totalPrice += it->getPrice();
    }
    return totalPrice;
  } catch (...) {
    cout << "[Error] Cannot process item information.\n";
    return 0;
  }
};
// This gives back a string of all items in the list
string ItemList::getAllItems() {
  try {
    list<Item>::iterator it;
    // calculate total price
    string totalPrice = 0;
    for (it = ItemDatabase.begin(); it != ItemDatabase.end(); ++it) {
      totalPrice += it->getPrice();
    }
    return totalPrice;
  } catch (...) {
    cout << "[Error] Cannot process item information.\n";
    return "";
  }
};

//   This prints out the information of all Items, in a tabular format
void ItemList::printInfo() {
  // First Print Headers
  try {
    cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
    cout << "█ Available Items █";
    cout << "\n███████████████████████████████████████████████████"
            "█";
    cout << "\n█ ";
    cout << setw(5) << left << "#";
    cout << "█ ";
    cout << setw(TAB_WIDTH) << left << "ID"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Name"
         << " █ ";
    cout << setw(TAB_WIDTH) << left << "Price (AED)"
         << "█ \n";
    list<Item>::iterator it;
    // Print Data
    int counter = 0;
    for (it = ItemDatabase.begin(); it != ItemDatabase.end(); ++it) {
      counter++;
      cout << "█ ";
      cout << setw(5) << left << counter;
      cout << "█ ";
      cout << setw(TAB_WIDTH) << left << it->getID() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getName() << " █ ";
      cout << setw(TAB_WIDTH) << left << it->getPrice() << "█ \n";
    }
    // Print closing line
    cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
            "▀▀\n";
  } catch (...) {
    cout << "[Error] Could not print item information.\n";
  }
};