# Cafe-Management-System
Cafe Management System Implemented using C++.
KEY FEATURES:
1-Menu Display:
Items like tea, coffee and Burger are listed with their prices.
It is displayed using the showmenu() function.
Ordering System:
In this the order() function is used:
View the menu.
Select an item by entering its number.
Enter the quantity.
See the total bill after finishing the order (by entering 0).
Total Sales:
A global variable totalsales shows the total earnings from all orders.
Admin Features:
Allows the cafe admin to
<br>Add new items.<br>
Delete items.
View total earnings.
Modular Design:
The program uses multiple functions 
showmenu()
order()
addnew()
earnings()
admin()
deleteitems()

User Interface:
A simple text-based menu interface appears in the console. The user is prompted to choose between customer and admin.
	Program flow:
The main() function presents a choice:
Enter as customer -   Calls order()
Enter as admin-   Calls admin() which allows item management and viewing sales.
The loop continues until the user decides to exit.
	Importance:
	Simple and beginner friendly.
	Covers core C++ concepts: arrays, loops, functions, conditionals.
	Uses CRUD (create, read, update, delete)
	Limitations:
	Item capacity is fixed.
	No input validation for non-numeric entries.

