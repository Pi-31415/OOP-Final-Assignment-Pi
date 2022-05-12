#ifndef DELIVERYMAN_H
#define DELIVERYMAN_H

#include "Functions.h"
#include "Person.h"

class DeliveryMan : public Person {
protected:
  string motorbikeID;
  // This is for handling segmentation faults
  int faultHandler;

public: // Declare Public Functions
  // Default Constructor  for DeliveryMan Class
  DeliveryMan();
  // Paramterized Constructor for DeliveryMan Class
  DeliveryMan(string Name, string Email, string Mobile, string MotorbikeID);
  // Getters
  string getMotorbikeID();
  int getFaultHandler();
  // Declare Setters
  void setMotorbikeID(const string value);
  // Print DeliveryMan Information
  void printInfo();
};

#endif