# Product Inventory Using File Handling in C

## Project Description

A simple C program that demonstrates file handling by storing product inventory details in a text file. The program accepts product ID, name, quantity, and price and saves the information in `products.txt`.

## Features

- Enter product details
- Store product ID and name
- Store product quantity and price
- Create the inventory file automatically
- Append multiple product records
- Use `fprintf()` to write data
- Close the file using `fclose()`

## Technologies Used

- C
- File Handling
- Structures
- `FILE`
- `fopen()`
- `fprintf()`
- `fclose()`

## How to Run

1. Create a file named `product_inventory.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.
4. The `products.txt` file will be created in the project folder.

Example using GCC:

```bash
gcc product_inventory.c -o product_inventory
./product_inventory

===== Product Inventory Using File Handling =====
Enter Product ID: 101
Enter Product Name: Keyboard
Enter Quantity: 10
Enter Price: 750

Product record saved successfully!
Data is stored in products.txt

Product ID: 101
Name: Keyboard
Quantity: 10
Price: 750.00
-------------------------

Author

M.Likitha
