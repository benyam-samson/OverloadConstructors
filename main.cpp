//Benyam Samson, COSC 1437-58001, November 19, 2019
#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
#include <vector>
using namespace std;

int main() {
  //Instantiate an inventory item item1 using the default constructor
  InventoryItem item1;    //default constructor is called with no arguments passed
  //instantiate an inventory itemdesc Hammer with one arameter
  InventoryItem item2("Hammer");

  item1.setDescription("Saw");
  item1.setCost(25.99);
  item1.setUnits(8);

  InventoryItem item3("Flathead Screwdriver", 5.33, 63);
  
  //Array of Objects
  //Goal: Store and efficiently display the items in the list(array) 
  const int NUM_ITEMS = 3;
  InventoryItem arr[NUM_ITEMS];
  arr[0] = item1;
  arr[1] = item2;
  arr[2] = item3;

  cout << "\n         Items in the Inventory Array \n" << endl;
  cout << setw(20) << "InventoryItem" << setw(8) << "Cost" << setw(18) << "Units on Hand\n";
  cout << "_________________________________________________" << endl;
  for (int i = 0; i < NUM_ITEMS; i++) {
    cout << setw(20) << arr[i].getDescription() << setw(8) << arr[i].getCost() << setw(18) << arr[i].getUnits() << endl;
  }

  vector<InventoryItem> vec;
  vec.push_back(item1);
  vec.push_back(item2);
  vec.push_back(item3);

  cout << "\n\n\n\n         Items in the Inventory Vector \n" << endl;
  cout << setw(20) << "InventoryItem" << setw(8) << "Cost" << setw(18) << "Units on Hand\n";
  cout << "_________________________________________________" << endl;
  for (InventoryItem x: vec) {
    cout << setw(20) << x.getDescription() << setw(8) << x.getCost() << setw(18) << x.getUnits() << endl;
  }

  return 0;
}