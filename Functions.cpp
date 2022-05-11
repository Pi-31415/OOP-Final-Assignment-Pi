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

void getIntegerVariable(int &variable, string message) {
  // This function the variable from input stream and pass by reference
  // We need to make sure that the user is actually inputting a number
  // Otherwise, this function will force the user to input until they give a
  // number
  string rawInput = "";
  bool numberIsValid = false;
  // Prompt the user until they give a correct numeric value, using exception
  // handling
  while (numberIsValid == false) {
    try {
      cout << "[INPUT] " << message << " :";
      // Get input as string
      cin >> rawInput;
      // Try converting to number, to make sure that it can be processed
      variable = stoi(rawInput);
      if (variable < 0) {
        // Reject -ve inputs
        throw 1;
      }
      numberIsValid = true;
    } catch (...) {
      cout << "There was an error processing the input. Please try "
              "again.\n";
    }
  }
}

void getDoubleVariable(double &variable, string message) {
  // This function the variable from input stream and pass by reference
  // We need to make sure that the user is actually inputting a number
  // Otherwise, this function will force the user to input until they give a
  // number
  string rawInput = "";
  bool numberIsValid = false;
  // Prompt the user until they give a correct numeric value, using exception
  // handling
  while (numberIsValid == false) {
    try {
      cout << "[INPUT] " << message << " :";
      // Get input as string
      cin >> rawInput;
      // Try converting to number, to make sure that it can be processed
      variable = stod(rawInput);
      if (variable < 0) {
        // Reject -ve inputs
        throw 1;
      }
      numberIsValid = true;
    } catch (...) {
      cout << "There was an error processing the input. Please try "
              "again.\n";
    }
  }
}