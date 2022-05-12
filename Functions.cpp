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

// This prints a banner on main menu
void printBanner() {
  cout
      << ".__                           __   .__                         .__   "
      << endl;
  cout
      << "|__|_______ _______ _____   _/  |_ |__|  ____    ____  _____   |  |  "
      << endl;
  cout << "|  |\\_  __ \\\\_  __ \\\\__  \\  \\   __\\|  | /  _ \\  /    \\ "
          "\\__  \\  |  |  "
       << endl;
  cout << "|  | |  | \\/ |  | \\/ / __ \\_ |  |  |  |(  <_> )|   |  \\ / __ "
          "\\_|  |__"
       << endl;
  cout << "|__| |__|    |__|   (____  / |__|  |__| \\____/ |___|  /(____  "
          "/|____/"
       << endl;
  cout << "                         \\/                         \\/      \\/  "
       << endl;
  cout << endl;
  cout << "  __                     __           " << endl;
  cout << "_/  |_ _____     _______/  |_   ____  " << endl;
  cout << "\\   __ \\__  \\   /  ___/\\   __\\_/ __ \\ " << endl;
  cout << " |  |   / __ \\_ \\___ \\  |  |  \\  ___/ " << endl;
  cout << " |__|  (____  //____  > |__|   \\___  >" << endl;
  cout << "            \\/      \\/             \\/ " << endl;
}

// Clears the screen by printing many blank lines
void clearScreen() {
  for (int i = 0; i <= 1000; i++) {
    cout << endl;
  }
}

// Prints main menu
void printMainMenu() {
  cout << "A fast food delivery management system by Pi" << endl;
  cout << "--------------------------------------------" << endl;
  cout << "Options" << endl;
  cout << "[1] Manage Orders" << endl;
  cout << "[2] Manage Customers" << endl;
  cout << "[3] Manage Delivery Men" << endl;
  cout << "[4] Manage Food Items" << endl;
  cout << "[0] Exit Program" << endl << endl;
}

void printMenuOrder() {
  cout << "\nOptions" << endl;
  cout << "[5] New Order" << endl;
  cout << "[6] Remove an Order" << endl;
  cout << "[7] Mark an order as complete" << endl;
  cout << "[8] Back" << endl;
}

void printMenuCustomer() {
  cout << "\nOptions" << endl;
  cout << "[9] New Customer" << endl;
  cout << "[10] Remove a Customer" << endl;
  cout << "[11] Back" << endl;
}

void printMenuDelivery() {
  cout << "\nOptions" << endl;
  cout << "[12] New Delivery Man" << endl;
  cout << "[13] Remove a Delivery Man" << endl;
  cout << "[14] Back" << endl;
}

void printMenuItem() {
  cout << "\nOptions" << endl;
  cout << "[15] New Item" << endl;
  cout << "[16] Remove an Item" << endl;
  cout << "[17] Back" << endl;
}