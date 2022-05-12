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
  int stock;
  double price;
  getStringVariable(name, "Name");
  getIntegerVariable(stock, "Current Stock");
  getDoubleVariable(price, "Price (AED)");
  Item temporary(name, stock, price);
  ItemDatabase.push_back(temporary);
}
// Function overloading for paramaterization. This can be called to record the
// Item info programatically
void ItemList::addItem(string name, int stock, double price) {
  Item temporary(name, stock, price);
  ItemDatabase.push_back(temporary);
}
// This removes the Item with the specific ID
void ItemList::removeItem(string ID) {
  // Below code is for finding object in the list, by functor predicate and
  // std::find_if. Reference :
  // https://stackoverflow.com/questions/16445358/stdfind-object-by-member
  list<Item>::iterator result = ItemDatabase.begin();
  result = find_if(ItemDatabase.begin(), ItemDatabase.end(), findByID(ID));
  ItemDatabase.erase(result);
}

// This prints out a particular Item's information from their ID
Item ItemList::getItemInfo(string ID) {
  list<Item>::iterator result = ItemDatabase.begin();
  result = find_if(ItemDatabase.begin(), ItemDatabase.end(), findByID(ID));
  return *result;
}

//   This prints out the information of all Items, in a tabular format
void ItemList::printInfo() {
  // First Print Headers
  cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
  cout << "█ Available Items █";
  cout << "\n██████████████████████████████████████████████████████████████████"
          "█";
  cout << "\n█ ";
  cout << setw(5) << left << "#";
  cout << "█ ";
  cout << setw(TAB_WIDTH) << left << "ID"
       << " █ ";
  cout << setw(TAB_WIDTH) << left << "Name"
       << " █ ";
  cout << setw(TAB_WIDTH) << left << "Stock"
       << " █ ";
  cout << setw(TAB_WIDTH) << left << "Price"
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
    cout << setw(TAB_WIDTH) << left << it->getStock() << " █ ";
    cout << setw(TAB_WIDTH) << left << it->getPrice() << "█ \n";
  }
  // Print closing line
  cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
          "▀▀\n";
};