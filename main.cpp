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

  // Greet the user
  clearScreen();
  printBanner();
  printMainMenu();

  // Instantiate Objects
  CustomerList customersData;
  DeliveryManList deliveryMenData;
  ItemList foodData;
  FoodDeliveryDatabase mainDataBase;

  // Instantiate Initial Data
  customersData.addCustomer("Yu Lifan", "lf@qq.com", "+86 235877", "Chongqing",
                            25);
  customersData.addCustomer("Wang Qiyun", "qy@qq.com", "+86 18477", "Xi An",
                            24);
  customersData.addCustomer("Jon Chui", "jc@a3i.co", "+852 874212", "Wan Chai",
                            22);
  deliveryMenData.addDeliveryMan("Cao Cao", "cc@wei.co", "+86 235877",
                                 "W200GS");
  deliveryMenData.addDeliveryMan("Kong Ming", "km@shu.co", "+86 234544",
                                 "S500SS");
  deliveryMenData.addDeliveryMan("Sun Tzu", "st@zhou.co", "+86 1234567",
                                 "ZH2345C");
  foodData.addItem("Soup Noodle", 32.5);
  foodData.addItem("Roasted Duck", 82.5);
  foodData.addItem("Jasmine Tea", 12.5);

  mainDataBase.addOrder("Jasmine Tea,Roasted Duck", "Wang Qiyun", "Sun Tzu",
                        95);

  // Main Program. Put the user in while true loop until exit
  int choice = 100;
  getIntegerVariable(choice, "Enter Choice [1,2,3,4 or 0]");
  while (true) {
    // Perform different actions based on choices
    switch (choice) {
    case 0:
      cout << "[INFO] Exiting Program.";
      exit(0);
      break;
    case 1:
      clearScreen();
      mainDataBase.printInfo();
      printMenuOrder();
      getIntegerVariable(choice, "Enter Choice [5,6,7,8]");
      break;
    case 2:
      clearScreen();
      customersData.printInfo();
      printMenuCustomer();
      getIntegerVariable(choice, "Enter Choice [9,10,11]");
      break;
    case 3:
      clearScreen();
      deliveryMenData.printInfo();
      printMenuDelivery();
      getIntegerVariable(choice, "Enter Choice [12,13,14]");
      break;
    case 4:
      clearScreen();
      foodData.printInfo();
      printMenuItem();
      getIntegerVariable(choice, "Enter Choice [15,16,17]");
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
    case 8:
      // Main Menu
      clearScreen();
      printBanner();
      printMainMenu();
      getIntegerVariable(choice, "Enter Choice [1,2,3,4 or 0]");
      break;
    case 9:
      cout << "Sunday";
      break;
    case 10:
      cout << "Sunday";
      break;
    case 11:
      // Main Menu
      clearScreen();
      printBanner();
      printMainMenu();
      getIntegerVariable(choice, "Enter Choice [1,2,3,4 or 0]");
      break;
    case 12:
      cout << "Sunday";
      break;
    case 13:
      cout << "Sunday";
      break;
    case 14:
      // Main Menu
      clearScreen();
      printBanner();
      printMainMenu();
      getIntegerVariable(choice, "Enter Choice [1,2,3,4 or 0]");
      break;
    case 15:
      cout << "Sunday";
      break;
    case 16:
      cout << "Sunday";
      break;
    case 17:
      // Main Menu
      clearScreen();
      printBanner();
      printMainMenu();
      getIntegerVariable(choice, "Enter Choice [1,2,3,4 or 0]");
      break;
    default:
      cout << "\n[Error] Invalid Choice. Try Again." << endl;
      getIntegerVariable(choice, "Enter Choice");
    }
  }
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

  // Order o1("Coke,Bottle", "Pi Ko", "Eyob", 234);

  // ItemList c1;
  // c1.addItem("Juice", 11.0);
  // c1.addItem("Cake", 12.0);
  // c1.addItem("Apple", 13.0);
  // c1.printInfo();

  // cout << c1.getAllItems();

  // FoodDeliveryDatabase f;
  // f.addOrder("Coke,Bottle", "Pi Ko", "Eyob", 234);
  // f.printInfo();

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