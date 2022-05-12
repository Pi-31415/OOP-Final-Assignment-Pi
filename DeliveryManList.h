#ifndef DELIVERYMAN_LIST_H
#define DELIVERYMAN_LIST_H

#include "DeliveryMan.h"
#include "Functions.h"
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;

class DeliveryManList {
private:
  list<DeliveryMan> DeliveryMen;

public:
  //   Default Constructor
  DeliveryManList();
  // This adds a new DeliveryMan instance to the list container, manually
  void addDeliveryMan();
  // This adds a new DeliveryMan programatically via function overloading
  void addDeliveryMan(string Name, string Email, string Mobile,
                      string MotorbikeID);
  // This removes the DeliveryMan with the specific ID
  void removeDeliveryMan(string ID);
  // This prints out a particular DeliveryMan's information from their ID
  void getDeliveryManInfo(string ID);
  //   This prints out the information of all DeliveryMen
  void printInfo();
};

#endif