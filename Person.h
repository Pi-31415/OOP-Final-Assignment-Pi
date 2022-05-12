#pragma once
#include <iostream>
#include <string>
using namespace std;

// Add header for utility functions
#include "Functions.h"

class Person {
  // This is the base class in which Customer and DeliveryMan Class inherits
protected:
  // Declare Protected Members
  string name;
  string email;
  string mobile;

public:      // Declare Public Functions
  string id; //   The ID is unique, autogenerated and cannot be modified
  // Default Constructor  for Person Class
  Person();
  // Paramterized Constructor for Person Class
  Person(string Name, string Email, string Mobile);
  //   Getters
  string getID();
  string getName();
  string getEmail();
  string getMobile();
  // Declare Setters
  void setName(const string value);
  void setEmail(const string value);
  void setMobile(const string value);
};