#ifndef DeliveryMan_H
#define DeliveryMan_H

#include "Functions.h"
#include "Person.h"

class DeliveryMan : public Person {
protected:
  string MotorbikeID;

public: // Declare Public Functions
  // Default Constructor  for DeliveryMan Class
  DeliveryMan();
  // Paramterized Constructor for DeliveryMan Class
  DeliveryMan(string Name, string Email, string Mobile, string MotorbikeID);
  // Getters
  string getMotorbikeID();
  // Declare Setters
  void setMotorbikeID(const string value);
  // Print DeliveryMan Information
  void printInfo();
};

#endif