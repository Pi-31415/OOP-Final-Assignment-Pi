#include <iomanip>

#include "Item.h"

// Define the Tab Width for setw
#define TAB_WIDTH 15
using namespace std;

// Here, we provide the full declaration of functions from Item.h header
// file.
Item::Item() {}
Item::Item(string Name, int Stock, double Price) {
  id = generateID("Item");
  name = Name;
  stock = Stock;
  price = Price;
};

// Getters
string Item::getID() { return id; };
string Item::getName() { return name; };
int Item::getStock() { return stock; };
double Item::getPrice() { return price; };
// Declare Setters
void Item::setName(const string value) { name = value; };
void Item::addItem(const int value) { stock += value; };
void Item::sellItem(const int value) {
  stock -= value;
  // Check if there is stock left, don't allow to sell if there is none left
  if (stock < 0) {
    stock += value;
    cout << "[Error] Not enough " << name << " left to sell.\n";
  }
};
void Item::setPrice(const double value) { price = value; };
