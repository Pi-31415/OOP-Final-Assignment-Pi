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

#endif