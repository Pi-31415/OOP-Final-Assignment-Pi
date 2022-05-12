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

  string query = "";

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
      // Add new customer
      customersData.addCustomer();
      clearScreen();
      customersData.printInfo();
      printMenuCustomer();
      getIntegerVariable(choice, "Enter Choice [9,10,11]");
      break;
    case 10:
      // Delete a customer
      query = "";
      getStringVariable(query, "ID to delete (Copy and paste, e.g. C16807)");
      customersData.removeCustomer(query);
      clearScreen();
      customersData.printInfo();
      printMenuCustomer();
      getIntegerVariable(choice, "Enter Choice [9,10,11]");
      break;
    case 11:
      // Main Menu
      clearScreen();
      printBanner();
      printMainMenu();
      getIntegerVariable(choice, "Enter Choice [1,2,3,4 or 0]");
      break;
    case 12:
      // Add new delivery man
      deliveryMenData.addDeliveryMan();
      clearScreen();
      deliveryMenData.printInfo();
      printMenuDelivery();
      getIntegerVariable(choice, "Enter Choice [12,13,14]");
      break;
    case 13:
      // Delete a delivery man
      query = "";
      getStringVariable(query, "ID to delete (Copy and paste, e.g. D16807)");
      deliveryMenData.removeDeliveryMan(query);
      clearScreen();
      deliveryMenData.printInfo();
      printMenuDelivery();
      getIntegerVariable(choice, "Enter Choice [12,13,14]");
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
  return 0;
}