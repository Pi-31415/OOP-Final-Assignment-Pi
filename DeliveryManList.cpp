#include "DeliveryManList.h"
#include "DeliveryMan.h"
#include "Functions.h"
#include <iomanip>

using namespace std;
// Define the Tab Width for setw
#define TAB_WIDTH 12

// Below code is for finding object in the list, by functor predicate and
// std::find_if. Reference :
// https://stackoverflow.com/questions/16445358/stdfind-object-by-member
struct findByID {
  findByID(string const &n) : query(n) {}
  bool operator()(DeliveryMan const &p) { return p.id == query; }

private:
  string query;
};

DeliveryManList::DeliveryManList(){};

// This adds a new DeliveryMan instance to the list container
// This function is for manual user input
void DeliveryManList::addDeliveryMan() {
  string name, email, mobile, bikeID;
  getStringVariable(name, "Name");
  getStringVariable(email, "Email");
  getStringVariable(mobile, "Mobile");
  getStringVariable(bikeID, "Bike ID");
  DeliveryMan temporary(name, email, mobile, bikeID);
  DeliveryMen.push_back(temporary);
}
// Function overloading for paramaterization. This can be called to record the
// DeliveryMan info programatically
void DeliveryManList::addDeliveryMan(string name, string email, string mobile,
                                     string bikeID) {
  DeliveryMan temporary(name, email, mobile, bikeID);
  DeliveryMen.push_back(temporary);
}
// This removes the DeliveryMan with the specific ID
void DeliveryManList::removeDeliveryMan(string ID) {
  // Below code is for finding object in the list, by functor predicate and
  // std::find_if. Reference :
  // https://stackoverflow.com/questions/16445358/stdfind-object-by-member
  try {
    list<DeliveryMan>::iterator result = DeliveryMen.begin();
    result = find_if(DeliveryMen.begin(), DeliveryMen.end(), findByID(ID));
    // If the result is from random memory addresses, reject the finding result
    // I used a variable to check because inability to find an item in list
    // results in segmentation fault And segmentation faults cannot be caught
    // via try catch
    if (result->getFaultHandler() != 100) {
      throw(0);
    } else {
      DeliveryMen.erase(result);
    }
  } catch (...) {
    cout << "[Error] Could not remove delivery man with ID " << ID << ".\n";
  }
}

// This prints out a particular DeliveryMan's information from their ID
void DeliveryManList::getDeliveryManInfo(string ID) {
  list<DeliveryMan>::iterator result = DeliveryMen.begin();
  result = find_if(DeliveryMen.begin(), DeliveryMen.end(), findByID(ID));
  result->printInfo();
}

//   This prints out the information of all DeliveryMen, in a tabular format
void DeliveryManList::printInfo() {
  // First Print Headers
  cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
  cout << "█ CURRENT DELIVERY MEN IN SYSTEM █";
  cout << "\n██████████████████████████████████████████████████████████████████"
          "████████████████";
  cout << "\n█ ";
  cout << setw(5) << left << "#";
  cout << "█ ";
  cout << setw(TAB_WIDTH) << left << "ID"
       << " █ ";
  cout << setw(TAB_WIDTH) << left << "Name"
       << " █ ";
  cout << setw(TAB_WIDTH) << left << "Email"
       << " █ ";
  cout << setw(TAB_WIDTH) << left << "Mobile"
       << " █ ";
  cout << setw(TAB_WIDTH) << left << "Motobike ID"
       << "█ \n";
  list<DeliveryMan>::iterator it;
  // Print Data
  int counter = 0;
  for (it = DeliveryMen.begin(); it != DeliveryMen.end(); ++it) {
    counter++;
    cout << "█ ";
    cout << setw(5) << left << counter;
    cout << "█ ";
    cout << setw(TAB_WIDTH) << left << it->getID() << " █ ";
    cout << setw(TAB_WIDTH) << left << it->getName() << " █ ";
    cout << setw(TAB_WIDTH) << left << it->getEmail() << " █ ";
    cout << setw(TAB_WIDTH) << left << it->getMobile() << " █ ";
    cout << setw(TAB_WIDTH) << left << it->getMotorbikeID() << "█ \n";
  }
  // Print closing line
  cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
          "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
};