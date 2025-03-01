# Invoice-management-system

This project is a simple billing system implemented in C++. It allows users to enter company details, add items with their quantity and MRP, and generate a tax invoice. The system also supports payment methods such as cash and credit/debit card transactions.

Features

Enter company name and address

Add multiple products with their quantity and MRP

Automatic price calculation based on quantity and MRP

Generates a tax invoice with itemized billing details

Supports payment via cash or credit/debit card

Displays balance amount if paid in cash

Ensures transaction validation

Prerequisites

A C++ compiler that supports Turbo C++ (such as Turbo C++ 3.0 or Borland C++)

DOS environment or an emulator like DOSBox (if running on modern systems)

Usage

Enter the company details when prompted.

Input the number of products and their details (shortcode name, quantity, and MRP).

The system will calculate the total price automatically.

Choose the payment mode:

If paying by cash, enter the amount collected and check for balance.

If paying by card, enter card details and PIN for transaction success.

The final invoice will be displayed on the screen.

Known Issues

Uses conio.h and dos.h, which are outdated and may not work on modern compilers.

getdate() function is non-standard and may require an alternative implementation.

clrscr() and getch() may need to be replaced with modern alternatives.

Future Improvements

Improve compatibility with modern compilers.

Store invoice details in a file for record-keeping.

Implement a graphical user interface (GUI) for better usability.
