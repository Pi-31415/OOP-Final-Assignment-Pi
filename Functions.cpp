#include <iostream>
#include <string>
#include <time.h>
using namespace std;

#include "Functions.h"

// The following are Utility Functions for different classes

static int random_seed = 0;
string generateID(string Type) {
  random_seed++;
  srand(random_seed);
  // Use current time to generate a Unique numerical ID
  int number = rand() % time(0);
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
      cout << "[INPUT] " << message << " : ";
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
      cout << "[ERROR] Invalid input. Try "
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
      cout << "[INPUT] " << message << " : ";
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
      cout << "[ERROR] Invalid input. Try "
              "again.\n";
    }
  }
}

void getStringVariable(string &variable, string message) {
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
      cout << "[INPUT] " << message << " : ";
      // Get input as string
      cin >> rawInput;
      // Check if it is empty string
      variable = rawInput;
      if (variable == "") {
        // Reject -ve inputs
        throw 1;
      }
      numberIsValid = true;
    } catch (...) {
      cout << "[ERROR] Invalid input. Try "
              "again.\n";
    }
  }
}
// Get the current Local Time as string
string getCurrentTime() {
  //   Date Time Reference
  //   (https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm)
  // current date/time based on current system
  time_t now = time(0);
  tm *ltm = localtime(&now);

  // Format time using tm structure.
  string formattedTime =
      to_string(1900 + ltm->tm_year) + "-" + to_string(1 + ltm->tm_mon) + "-" +
      to_string(ltm->tm_mday) + " " + to_string(ltm->tm_hour) + ":" +
      to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec);
  return (formattedTime);
}