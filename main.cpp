#include <iostream>
#define TAX_RATE 0.1
using namespace std;


int main() {
	cout << "The purpose of this program is to analyze product sales and inventory for a store. \n It is written using c++, which is a compiled language."<<endl;

	string productName;
	int productCategory;
	int initialInventoryQuantity;
	float productPricePerUnit;
	int numberOfItemsSold;

	int newInventory;
	float totalSalesAmount =0;
	string inventoryStatus;

	auto copyOfTotalSalesAmount = totalSalesAmount;
	decltype(initialInventoryQuantity) copyOfInitialInventoryQuantity = 0;

	const double taxRate = 0.2;


	cout << "Enter product name: "<<endl;
	cin >> productName;
	cout << "Enter product category: "<<endl;
	cin >> productCategory;
	cout << "Enter initial inventory quantity: "<<endl;
	cin >> initialInventoryQuantity;
	cout << "Enter product price: "<<endl;
	cin >> productPricePerUnit;
	cout << "Enter number of items sold: "<<endl;
	cin >> numberOfItemsSold;

	newInventory = initialInventoryQuantity;
	newInventory -= numberOfItemsSold;
	totalSalesAmount = numberOfItemsSold * productPricePerUnit;

	copyOfTotalSalesAmount = totalSalesAmount;
	copyOfInitialInventoryQuantity = initialInventoryQuantity;


	newInventory < 10 ? inventoryStatus = "Low Inventory" : inventoryStatus = "Sufficient Inventory";


	if (productCategory >= 1 && productCategory<= 5) {
		switch (productCategory) {
		case 1:
			cout << "Category 1: Electronics"<< endl;
			break;
		case 2:
			cout << "Category 2: Groceries" << endl;
			break;
		case 3:
			cout << "Category 3: Clothing" << endl;
			break;
		case 4:
			cout << "Category 4: Stationery" << endl;
			break;
		case 5:
			cout << "Category 5: Miscellaneous" << endl;
			break;
		}
	}
	else {
		cout << "Product Category is not in range.";
	}

    cout<<"Receipt: "<<endl;
	for (int i=1; i<= numberOfItemsSold; i++) {
		cout << "Price of item"<<i<<": "<< productPricePerUnit<<endl;
	}

	cout << "tax rates: \n" << "Tax rate 1: "<<TAX_RATE << "\n" <<"Tax rate 2: "<< taxRate<<endl;
	cout << "Product details: \n" <<"Product Name: " << productName << "\nProduct Category: " << productCategory << "\nInitial Inventory: " << initialInventoryQuantity << "\nProduct Price: " << productPricePerUnit << "\nItems sold: " << numberOfItemsSold<<endl;
	cout << "New Inventory: " << newInventory << "\nTotal Sales:" << totalSalesAmount<<endl;
	cout << "Inventory Status: " << inventoryStatus<<endl;
	cout << "Copy of total sales amount:" << copyOfTotalSalesAmount<<endl;
	cout << "Copy of initial inventory: " << copyOfInitialInventoryQuantity<<endl;

}
