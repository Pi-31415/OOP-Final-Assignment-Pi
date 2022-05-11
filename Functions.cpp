#include <iostream>
#include <string>
#include <time.h>
using namespace std;

#include "Functions.h"

// The following are Utility Functions for different classes

string generateID(string Type) {
  // Use current time to generate a Unique numerical ID
  int number = time(0) % 100000;
  // Then, generate an ID, by combing the first letter of Type, and the
  // numerical ID
  string generatedID = Type.at(0) + to_string(number);
  return generatedID;
}