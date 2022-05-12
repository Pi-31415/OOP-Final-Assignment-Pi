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
  double currentDiscount = 0;
  string orderedItemTemp = "";
  string customerTemp = "";
  string deliveryTemp = "";
  double totalPriceTemp = 0.0;

  // Instantiate Objects
  CustomerList customersData;
  DeliveryManList deliveryMenData;
  ItemList foodData;
  FoodDeliveryDatabase mainDataBase;
  ItemList tempItem;

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

  mainDataBase.addOrder("Jasmine Tea,Roasted Duck", "C1234", "D1234", 95);
  mainDataBase.addOrder("Roasted Duck", "C2523", "D1156", 82.5);

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
      // Add a new Order
      clearScreen();
      tempItem.clear();
      // First Get the food to order
      foodData.printInfo();
      query = "";
      cout << "Add the Item to Order. Type the ID to add the Item." << endl
           << endl;
      getStringVariable(query, "ID of Food (Type, such as I117649)");
      // getStringVariable(query, "ID of Food (Type, such as
      // I117649)");
      if (foodData.getItemName(query) != "") {
        tempItem.addItem(foodData.getItemName(query),
                         foodData.getItemPrice(query));
        orderedItemTemp = tempItem.getAllItems();
        totalPriceTemp = tempItem.calculateTotalPrice();
      } else {
        // Go back if error
        choice = 1;
      }
      // Then get customer data
      clearScreen();
      customersData.printInfo();
      cout << "Who orderd it? Type the ID." << endl << endl;
      query = "";
      cout << "ID of Customer (Type, such as C117649) : ";
      cin >> query;
      customerTemp = query;
      if (customersData.getCustomerDiscount(query) != 101) {
        currentDiscount = customersData.getCustomerDiscount(query);
        // Apply Discount
        totalPriceTemp =
            totalPriceTemp - ((currentDiscount / 100) * totalPriceTemp);
      } else {
        // Go back if error
        choice = 1;
      }
      // Then add delivery man
      clearScreen();
      deliveryMenData.printInfo();
      cout << "Who will deliver? Type the ID." << endl << endl;
      getStringVariable(query, "ID of Delivery Man (Type, such as D117649)");
      deliveryTemp = query;
      mainDataBase.addOrder(orderedItemTemp, customerTemp, deliveryTemp,
                            totalPriceTemp);
      clearScreen();
      mainDataBase.printInfo();
      printMenuOrder();
      getIntegerVariable(choice, "Enter Choice [5,6,7,8]");
      break;
    case 6:
      query = "";
      getStringVariable(query, "Order ID to delete (Type, e.g. O16807)");
      mainDataBase.removeOrder(query);
      clearScreen();
      mainDataBase.printInfo();
      printMenuOrder();
      getIntegerVariable(choice, "Enter Choice [5,6,7,8]");
      break;
    case 7:
      query = "";
      getStringVariable(query, "Order ID to mark complete (Type, e.g. O16807)");
      mainDataBase.markAsComplete(query);
      clearScreen();
      mainDataBase.printInfo();
      printMenuOrder();
      getIntegerVariable(choice, "Enter Choice [5,6,7,8]");
      break;
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
      getStringVariable(query, "ID to delete (Type, e.g. C16807)");
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
      getStringVariable(query, "ID to delete (Type, e.g. D16807)");
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
      // Add new Food Item
      foodData.addItem();
      clearScreen();
      foodData.printInfo();
      printMenuItem();
      getIntegerVariable(choice, "Enter Choice [15,16,17]");
      break;
    case 16:
      // Delete Food Item
      query = "";
      getStringVariable(query, "ID to delete (Type, e.g. I16807)");
      foodData.removeItem(query);
      clearScreen();
      foodData.printInfo();
      printMenuItem();
      getIntegerVariable(choice, "Enter Choice [15,16,17]");
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