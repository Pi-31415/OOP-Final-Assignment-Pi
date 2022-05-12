#pragma once
#ifndef ITEM_LIST_H
#define ITEM_LIST_H

#include "Functions.h"
#include "Item.h"
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
// Forward Declaration for Item List
class ItemList {
private:
  list<Item> ItemDatabase;

public:
  //   Default Constructor
  ItemList();
  // This adds a new Item instance to the list container, manually
  void addItem();
  // This adds a new Item programatically via function overloading
  void addItem(string Name, double Price);
  // This empties the array
  void clear();
  // This removes the Item with the specific ID
  void removeItem(string ID);
  // This prints out a particular Item's price from their ID
  double getItemPrice(string ID);
  // This prints out a particular Item's name from their ID
  string getItemName(string ID);
  //   This prints out the information of all Item
  void printInfo();
  // This calculates the total price (without discount), for particular item
  // list
  double calculateTotalPrice();
  // This gives back a string of all items in the list
  string getAllItems();
};

#endif