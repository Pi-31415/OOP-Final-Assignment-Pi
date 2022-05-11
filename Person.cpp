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

// Declare Getters
string Person::getID() { return id; };
string Person::getName() { return name; };
string Person::getEmail() { return email; };
string Person::getMobile() { return mobile; };
// Declare Setters, with const for safety
void Person::setName(const string value) { name = value; };
void Person::setEmail(const string value) { email = value; };
void Person::setMobile(const string value) { mobile = value; };
