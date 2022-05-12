#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>

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
// Get the input, try convert it to string, validate it and store it in the
// variable
void getStringVariable(string &variable, string message);
// Get the current Local Time as string
string getCurrentTime();

#endif