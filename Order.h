#pragma once
#ifndef ORDER_H
#define ORDER_H

#include "Functions.h"
#include "ItemList.h"
using namespace std;

class Order {
private:
  ItemList orderItems;
  string Customer;
  string DeliveryMan;
  string OrderTime;
  string DeliveryTime;
  string Status;
  double TotalPrice;

public:
  string id;
};

#endif