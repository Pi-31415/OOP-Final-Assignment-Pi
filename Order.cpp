#include "Order.h"
#include "Functions.h"
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
// Define the Tab Width for setw
#define TAB_WIDTH 12
// Default Constructor
Order::Order(){};
//   Parametrized Constructor
Order::Order(string OrderItems, string customer, string deliveryman,
             double totalPrice, string status) {
  id = generateID("Order");
  orderItems = OrderItems;
  Customer = customer;
  DeliveryMan = deliveryman;
  OrderTime = getCurrentTime();
  DeliveryTime = "-";
  Status = status;
  TotalPrice = totalPrice;
  faultHandler = 100;
};
//   Getters
string Order::getID() { return id; };
string Order::getCustomer() { return Customer; };
string Order::getDeliveryMan() { return DeliveryMan; };
string Order::getOrderTime() { return OrderTime; };
string Order::getDeliveryTime() { return DeliveryTime; };
string Order::getStatus() { return Status; };
string Order::getItems() { return orderItems; };
double Order::getTotalPrice() { return TotalPrice; };
int Order::getFaultHandler() { return faultHandler; };
//   Setters
void Order::setCustomer(string value) { Customer = value; };
void Order::setDeliveryMan(string value) { DeliveryMan = value; };
void Order::setOrderTime(string value) { OrderTime = value; };
void Order::setDeliveryTime(string value) { DeliveryTime = value; };
void Order::setStatus(string value) { Status = value; };
void Order::setItems(string value) { orderItems = value; };
void Order::setTotalPrice(double value) { TotalPrice = value; };
