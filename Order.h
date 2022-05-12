#pragma once
#ifndef ORDER_H
#define ORDER_H

#include "Functions.h"
#include "ItemList.h"
using namespace std;

// Forward Declaration for Order
class Order {
private:
  string orderItems;
  string Customer;
  string DeliveryMan;
  string OrderTime;
  string DeliveryTime;
  string Status;
  double TotalPrice;

public:
  string id;
  //   Default Constructor
  Order();
  //   Parametrized Constructor
  Order(string OrderItems, string customer, string deliveryman);
  //   Getters
  string getID();
  string getCustomer();
  string getDeliveryMan();
  string getOrderTime();
  string getDeliveryTime();
  string getStatus();
  string getItems();
  double getTotalPrice();
  //   Setters
  void setID(string value);
  void setCustomer(string value);
  void setDeliveryMan(string value);
  void setOrderTime(string value);
  void setDeliveryTime(string value);
  void setStatus(string value);
  void setItems(string value);
  void setTotalPrice(double value);
};

#endif