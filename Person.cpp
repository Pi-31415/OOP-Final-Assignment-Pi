#include "Person.h"

using namespace std;

// Here, we provide the full declaration of functions from Person.h header file.
Person::Person() {}
Person::Person(string Name, string Email, string Mobile) {
  id = generateID("Person");
  name = Name;
  email = Email;
  mobile = Mobile;
};

string Person::getID() { return id; };
string Person::getName() { return name; };
string Person::getEmail() { return email; };
string Person::getMobile() { return mobile; };
// Declare Setters
void setName(string value);
void setEmail(string value);
void setMobile(string value);
