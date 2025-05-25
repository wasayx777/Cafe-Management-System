#include <iostream>
#include <string>
using namespace std;
const int MAX = 50;
string items[MAX] = { "Tea","coffee","burger" };
int itemprize[MAX] = { 150,200,250 };
int itemcount = 3;
int totalsales = 0;
int total = 100;

void showmenu()

{
	cout << "------MENU------" << endl;
	for (int i = 0; i < itemcount; i++)
	{
		cout << i + 1 << ". " << items[i] << " - " << itemprize[i] << " Rupees" << endl;
	}
	cout << "----------------" << endl;
}

void order()
{
	int order, quantity, total = 0;
	showmenu();
	while (true)
	{
		cout << "Enter order number (0 to finish ordering) = ";
		cin >> order;
		if (order == 0)
			break;
		if (order < 1 || order>itemcount)
		{
			cout << "Invalid order number !" << endl;
			continue;
		}

		cout << "\nEnter Quantity = ";
		cin >> quantity;
		int itemtotal = itemprize[order - 1] * quantity;
		total += itemtotal;
		totalsales += itemtotal;
	}
	cout << "Total bill is = " << total;
	cout << "\nTHANK YOU,COME AGAIN  -^_^- " << endl << endl << "**************************" << endl;

}
void addnew()
{

	int quantity;
	cout << "How many Products do you want to add ?" << endl;
	cin >> quantity;
	if (itemcount + quantity >= MAX)
	{
		cout << "Products reached its maximum limit,cannot add more!" << endl;
	}
	else {
		for (int i = 0; i < quantity; i++)
		{

			cout << "Enter Product's Name (one word only) : ";
			cin >> items[itemcount];
			cout << "\nEnter prize of item : ";
			cin >> itemprize[itemcount];
			itemcount++;
			cout << "\nProduct added successfully" << endl;
		}
	}

}
void earnings()
{
	cout << "Total Earnings are = " << totalsales << endl;
}
void deleteProduct() {
	int del;
	showmenu();
	cout << "Enter product number to delete: ";
	cin >> del;
	del -= 1;

	if (del < 0 || del >= itemcount) {
		cout << "Invalid product number!" << endl;
		return;
	}

	for (int i = del; i < itemcount - 1; i++) {
		items[i] = items[i + 1];
		itemprize[i] = itemprize[i + 1];
	}
	itemcount--;
	cout << "Product deleted successfully." << endl;
}

void resetSales() {
	totalsales = 0;
	cout << "Total sales record has been reset to 0." << endl;
}

void updateProduct() {
	int updateIndex;
	showmenu();
	cout << "Enter product number to update: ";
	cin >> updateIndex;
	updateIndex -= 1;

	if (updateIndex < 0 || updateIndex >= itemcount) {
		cout << "Invalid product number!" << endl;
		return;
	}

	cout << "Enter new name for the product: ";
	cin >> items[updateIndex];
	cout << "Enter new price for the product: ";
	cin >> itemprize[updateIndex];

	cout << "Product updated successfully." << endl;
}
void admin()
{
	string pass;
	int choice;
	cout << "Enter Password to Login = " << endl;
	cin >> pass;
	if (pass == "WH'scafe123")
	{
		cout << endl << endl;
		cout << "Access Granted" << endl;
		cout << "Welcome Admin!" << endl << endl;
		do {
			cout << "-------------------" << endl;
			cout << "1. Add new item " << endl;
			cout << "2. View total earnings " << endl;
			cout << "3. Delete a product" << endl;
			cout << "4. Reset total sales record" << endl;
			cout << "5. Update a product" << endl;
			cout << "6. Return to main menu" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				addnew();
				break;
			case 2:
				earnings();
				break;
			case 3:
				deleteProduct();
				break;
			case 4:
				resetSales();
				break;
			case 5:
				updateProduct();
				break;
			case 6:
				cout << "Returning to main menu" << endl;
				break;
			default:
				cout << "Invalid choice!" << endl;
			}
		} while (choice != 6);

	}
	else
	{
		cout << "ERROR! Access Denied " << endl;
	}
}




int main()
{
	int choice;
	do {
		cout << "=== CAFE MANAGEMENT SYSTEM ===" << endl;
		cout << "1. Show menu and order " << endl;
		cout << "2. Admin Login" << endl;
		cout << "3. Exit " << endl;
		cout << "Enter choice: " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			order();
			break;
		case 2:
			admin();
			break;
		case 3:
			cout << "-- GOOD BYE! --" << endl;
		}
	} while (choice != 3);

	return 0;
}