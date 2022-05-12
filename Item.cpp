#include <iomanip>

#include "Item.h"

// Define the Tab Width for setw
#define TAB_WIDTH 15
using namespace std;

// Here, we provide the full declaration of functions from Item.h header
// file.
Item::Item() {}
Item::Item(string Name, double Price) {
  id = generateID("Item");
  name = Name;
  price = Price;
  faultHandler = 100;
};

// Getters
string Item::getID() { return id; };
string Item::getName() { return name; };
double Item::getPrice() { return price; };
int Item::getFaultHandler() { return faultHandler; };
// Declare Setters
void Item::setName(const string value) { name = value; };
void Item::setPrice(const double value) { price = value; };
