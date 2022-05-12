#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// Import required headers and libraries
#include "Customer.h"
#include "CustomerList.h"
#include "DeliveryMan.h"
#include "DeliveryManList.h"
#include "Functions.h"
#include "Item.h"

int main() {
  // create object
  // Customer person1("Pi Ko", "pk2269@nyu.edu", "987654321", "NYUAD", 40);
  // DeliveryMan pk("Pi Ko", "pk2269@nyu.edu", "987654321", "A230");
  // pk.printInfo();
  Item i("a", 5, 5.5);
  cout << "ID : " << i.getID() << endl;
  cout << "Name : " << i.getName() << endl;
  cout << "Price : " << i.getPrice() << endl;
  cout << "Stock : " << i.getStock() << endl;
  // i.addItem(5);
  i.sellItem(6);
  cout << "ID : " << i.getID() << endl;
  cout << "Name : " << i.getName() << endl;
  cout << "Price : " << i.getPrice() << endl;
  cout << "Stock : " << i.getStock() << endl;
  // DeliveryManList c1;
  // c1.addDeliveryMan("Pi Ko", "pk22@nyu.edu", "987654321", "NYUAD101");
  // c1.addDeliveryMan("Sigma", "pk22@nyu.edu", "987654321", "NYUAD101");
  // c1.addDeliveryMan("Phi", "pk22@nyu.edu", "987654321", "NYUAD101");
  // c1.printInfo();

  // int menu = 0;
  // while (true) {
  //   getIntegerVariable(menu, "Menu");
  //   if (menu == 0) {
  //     c1.addDeliveryMan();
  //     c1.printInfo();
  //   } else {
  //     string name;
  //     getStringVariable(name, "ID to delete");
  //     // c1.getDeliveryManInfo(name);
  //     c1.removeDeliveryMan(name);
  //     c1.printInfo();
  //     // break;
  //   }
  // }

  return 0;
}