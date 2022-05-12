#ifndef ITEM_H
#define ITEM_H

#include "Functions.h"

class Item {
private:
  string name;
  int stock;
  double price;

public: // Declare Public Functions
  string id;
  // Default Constructor  for Item Class
  Item();
  // Paramterized Constructor for Item Class
  Item(string Name, double Price);
  // Getters
  string getID();
  string getName();
  double getPrice();
  // Declare Setters
  void setName(const string value);
  void addItem(const int value);
  void sellItem(const int value);
  void setPrice(const double value);
};

#endif