#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// Import required headers and libraries
#include "Customer.h"
#include "CustomerList.h"
#include "DeliveryMan.h"
#include "DeliveryManList.h"
#include "FoodDeliveryDatabase.h"
#include "Functions.h"
#include "Item.h"
#include "ItemList.h"
#include "Order.h"

int main() {
  // create object
  // Customer person1("Pi Ko", "pk2269@nyu.edu", "987654321", "NYUAD", 40);
  // DeliveryMan pk("Pi Ko", "pk2269@nyu.edu", "987654321", "A230");
  // pk.printInfo();

  // Item i("a", 5, 5.5);
  // cout << "ID : " << i.getID() << endl;
  // cout << "Name : " << i.getName() << endl;
  // cout << "Price : " << i.getPrice() << endl;
  // cout << "Stock : " << i.getStock() << endl;
  // // i.addItem(5);
  // i.sellItem(6);
  // cout << "ID : " << i.getID() << endl;
  // cout << "Name : " << i.getName() << endl;
  // cout << "Price : " << i.getPrice() << endl;
  // cout << "Stock : " << i.getStock() << endl;

  // DeliveryManList c1;
  // c1.addDeliveryMan("Pi Ko", "pk22@nyu.edu", "987654321", "NYUAD101");
  // c1.addDeliveryMan("Sigma", "pk22@nyu.edu", "987654321", "NYUAD101");
  // c1.addDeliveryMan("Phi", "pk22@nyu.edu", "987654321", "NYUAD101");
  // c1.printInfo();

  // ItemList c1;
  // c1.addItem("Juice", 11.0);
  // c1.addItem("Cake", 12.0);
  // c1.addItem("Apple", 13.0);
  // c1.printInfo();

  // Order o1("Coke,Bottle", "Pi Ko", "Eyob", 234);

  FoodDeliveryDatabase f;
  f.addOrder("Coke,Bottle", "Pi Ko", "Eyob", 234);
  f.printInfo();

  // cout << "\n\n\n\n\n";
  // cout << o1.getID() << endl;
  // cout << o1.getCustomer() << endl;
  // cout << o1.getDeliveryMan() << endl;
  // cout << o1.getOrderTime() << endl;
  // cout << o1.getDeliveryTime() << endl;
  // cout << o1.getStatus() << endl;
  // cout << o1.getItems() << endl;
  // cout << o1.getTotalPrice() << endl;

  // o1.setStatus("Delivered");

  // cout << "\n\n\n\n\n";
  // cout << o1.getID() << endl;
  // cout << o1.getCustomer() << endl;
  // cout << o1.getDeliveryMan() << endl;
  // cout << o1.getOrderTime() << endl;
  // cout << o1.getDeliveryTime() << endl;
  // cout << o1.getStatus() << endl;
  // cout << o1.getItems() << endl;
  // cout << o1.getTotalPrice() << endl;
  // cout << o1.getFaultHandler() << endl;

  // // CustomerList c1;
  // // c1.addCustomer("Pi Ko", "pk22@nyu.edu", "987654321", "NYU", 10);
  // // c1.addCustomer("Sig", "pk22@nyu.edu", "987654321", "NYU", 20);
  // // c1.addCustomer("Silv", "pk22@nyu.edu", "987654321", "NYU", 30);
  // // c1.addCustomer("Aya", "pk22@nyu.edu", "987654321", "NYU", 40);
  // // c1.printInfo();
  // int menu = 0;
  // while (true) {
  //   getIntegerVariable(menu, "Menu");
  //   if (menu == 0) {
  //     c1.addItem();
  //     c1.printInfo();
  //   } else {
  //     string name;
  //     getStringVariable(name, "ID to delete");
  //     // cout << c1.getCustomerDiscount(name);
  //     // c1.removeCustomer(name);
  //     // cout << c1.getCustomerDiscount(name);
  //     cout << c1.getItemPrice(name);
  //     c1.removeItem(name);
  //     c1.printInfo();
  //     cout << c1.getItemPrice(name);

  //     // c1.getDeliveryManInfo(name);
  //     // c1.removeDeliveryMan(name);
  //     // c1.getDeliveryManInfo(name);
  //     // c1.printInfo();
  //     // c1.getDeliveryManInfo(name);
  //     // cout << c1.getCustomerDiscount(name);
  //     // c1.getCustomerInfo(name);
  //     // c1.removeCustomer(name);
  //     // c1.printInfo();
  //     // c1.getCustomerInfo(name);
  //     // database1.printInfo();
  //     // break;
  //   }
  // }

  return 0;
}