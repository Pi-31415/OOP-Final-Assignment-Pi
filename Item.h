#ifndef ITEM_H
#define ITEM_H

#include "Functions.h"

class Item {
private:
  string id;
  string name;
  int stock;
  double price;

public: // Declare Public Functions
  // Default Constructor  for Item Class
  Item();
  // Paramterized Constructor for Item Class
  Item(string Name, int Stock, double Price);
  // Getters
  string getID();
  string getName();
  int getStock();
  double getPrice();
  // Declare Setters
  void setName(const string value);
  void addItem(const int value);
  void sellItem(const int value);
  void setPrice(const double value);
};

#endif