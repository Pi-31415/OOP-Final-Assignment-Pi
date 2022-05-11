#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Generate a unique ID based on Data Type (Customers, Person, DeliveryMan,
// Item, Order)
string generateID(string Type);
// Get the input, try convert it to int, validate it and store it in the
// variable
void getIntegerVariable(int &variable, string message);
// Get the input, try convert it to double, validate it and store it in the
// variable
void getDoubleVariable(double &variable, string message);

#endif