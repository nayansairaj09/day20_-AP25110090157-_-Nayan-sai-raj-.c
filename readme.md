# Day20_smart warehouse analytical system
*Student Name:* ch.nayan sai raj 
*Roll No:* AP25110090157  
*Challenge:Day20_smart warehouse analytical system

## Description
This c program is a warehouse management system that helos manage upto 20 products. It allows the user to add new products,search for existing ones , update stock 
quantities and generate useful reports . The system also analyzes a 3*3 matrix to display maximum,minimum and total stock. Additionally , it indicates the stock 
value of all products and displays the with the highest and lowest inventory worth. A simple menu driven interface is used to perform all the operations.

---

## Build Commands
### Linux/macOS:
```bash
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program

##output

==================== Warehouse Menu ====================
1. Add Product
2. Search Product
3. Update Quantity
4. Generate Rack Report
5. Calculate Stock Values
6. Display All Products
7. Exit
Enter your choice: 1

Enter Product ID: 123
Enter Quantity: 3
Enter Price per unit: 35

✔ Product Added Successfully!

==================== Warehouse Menu ====================
1. Add Product
2. Search Product
3. Update Quantity
4. Generate Rack Report
5. Calculate Stock Values
6. Display All Products
7. Exit
Enter your choice: 2

Enter Product ID to search: 123

Product Found!
ID: 123
Quantity: 3
Price: 35

==================== Warehouse Menu ====================
1. Add Product
2. Search Product
3. Update Quantity
4. Generate Rack Report
5. Calculate Stock Values
6. Display All Products
7. Exit
Enter your choice: 3

Enter Product ID to update: 123

1. Increase Stock
2. Decrease Stock
Enter choice: 1
Enter quantity: 4

✔ Stock Increased Successfully!

==================== Warehouse Menu ====================
1. Add Product
2. Search Product
3. Update Quantity
4. Generate Rack Report
5. Calculate Stock Values
6. Display All Products
7. Exit
Enter your choice: 3

Enter Product ID to update: 123

1. Increase Stock
2. Decrease Stock
Enter choice: 2
Enter quantity: 3

✔ Stock Decreased Successfully!

==================== Warehouse Menu ====================
1. Add Product
2. Search Product
3. Update Quantity
4. Generate Rack Report
5. Calculate Stock Values
6. Display All Products
7. Exit
Enter your choice: 4

Enter 3*3 Rack Stock Matrix:
123
123
123
456
456
556
789
789
789

===== Rack Report =====
Maximum Stock  : 789 at position (2, 0)
Minimum Stock  : 123 at position (0, 0)
Total Items in Racks: 4204

==================== Warehouse Menu ====================
1. Add Product
2. Search Product
3. Update Quantity
4. Generate Rack Report
5. Calculate Stock Values
6. Display All Products
7. Exit
Enter your choice: 5

ID      Qty     Price   StockValue
123     4       35      140

Highest Stock Value Product ID : 123 (140)
Lowest Stock Value Product ID  : 123 (140)
Total Warehouse Value          : 140

==================== Warehouse Menu ====================
1. Add Product
2. Search Product
3. Update Quantity
4. Generate Rack Report
5. Calculate Stock Values
6. Display All Products
7. Exit
Enter your choice: 6

ID      Quantity        Price
123     4               35

==================== Warehouse Menu ====================
1. Add Product
2. Search Product
3. Update Quantity
4. Generate Rack Report
5. Calculate Stock Values
6. Display All Products
7. Exit
Enter your choice: 7

Thank you! Exiting...
