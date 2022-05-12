#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Functions.h"
#include "Person.h"

class Customer : public Person {
protected:
  string address;
  // Discount is the percentage in which a particular customer is eligible for a
  // discount from total price
  double discount;

public: // Declare Public Functions
  // Default Constructor  for Customer Class
  Customer();
  // Paramterized Constructor for Customer Class
  Customer(string Name, string Email, string Mobile, string Address,
           double Discount);
  // Getters
  string getAddress();
  double getDiscount();
  // Declare Setters
  void setAddress(const string value);
  void setDiscount(const double value);
  int getFaultHandler();
  // Print Customer Information
  void printInfo();
};

#endif