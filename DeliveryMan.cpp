#include <iomanip>

#include "DeliveryMan.h"

// Define the Tab Width for setw
#define TAB_WIDTH 15
using namespace std;

// Here, we provide the full declaration of functions from DeliveryMan.h header
// file.
DeliveryMan::DeliveryMan() {}
DeliveryMan::DeliveryMan(string Name, string Email, string Mobile,
                         string MotorbikeID) {
  id = generateID("DeliveryMan");
  name = Name;
  email = Email;
  mobile = Mobile;
  motorbikeID = MotorbikeID;
};

// Getters
string DeliveryMan::getMotorbikeID() { return motorbikeID; };
// Declare Setters
void DeliveryMan::setMotorbikeID(const string value) { motorbikeID = value; };
// Print DeliveryMan Information
void DeliveryMan::printInfo() {
  cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
  cout << "█ Delivery Man " << id << " Information █\n";
  cout << setw(TAB_WIDTH) << left << "Name : " << name << "\n";
  cout << setw(TAB_WIDTH) << left << "Email : " << email << "\n";
  cout << setw(TAB_WIDTH) << left << "Mobile : " << mobile << "\n";
  cout << setw(TAB_WIDTH) << left << "Bike ID : " << motorbikeID << "\n";
};
