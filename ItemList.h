#ifndef ITEM_LIST_H
#define ITEM_LIST_H

#include "Functions.h"
#include "Item.h"
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;

class ItemList {
private:
  list<Item> ItemDatabase;

public:
  //   Default Constructor
  ItemList();
  // This adds a new Item instance to the list container, manually
  void addItem();
  // This adds a new Item programatically via function overloading
  void addItem(string Name, int Stock, double Price);
  // This removes the Item with the specific ID
  void removeItem(string ID);
  // This prints out a particular Item's information from their ID
  Item getItemInfo(string ID);
  //   This prints out the information of all Item
  void printInfo();
};

#endif