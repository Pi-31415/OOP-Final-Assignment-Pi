#pragma once
#ifndef DATABASE_LIST_H
#define DATABASE_LIST_H

#include "Customer.h"
#include "CustomerList.h"
#include "DeliveryMan.h"
#include "DeliveryManList.h"
#include "FoodDeliveryDatabase.h"
#include "Functions.h"
#include "Order.h"
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
// Forward Declaration for Order List
class FoodDeliveryDatabase {
private:
  list<Order> OrderDatabase;

public:
  //   Default Constructor
  FoodDeliveryDatabase();
  // This adds a new Order programatically via function overloading
  void addOrder(string OrderItems, string customer, string deliveryman,
                double totalPrice);
  // This removes the Order with the specific ID
  void removeOrder(string ID);
  // This marks the order as complete
  double completeOrder(string ID);
  //   This prints out the information of all Orders
  void printInfo();
};

#endif