# Electricity Bill Calculator using C

A simple C program that calculates an electricity bill based on the number of electricity units consumed.

## Features

- Takes electricity units as input
- Calculates the bill using slab-based pricing
- Displays total units consumed
- Displays the total electricity bill

## Technologies Used

- C Programming
- Conditional Statements
- Arithmetic Operations
- Standard Input/Output

## Electricity Slabs

| Units | Rate |
|------|------|
| 0 - 100 | ₹1/unit |
| 101 - 200 | ₹2/unit |
| 201 - 300 | ₹3/unit |
| Above 300 | ₹5/unit |

## Sample Output

Enter electricity units consumed: 250

Electricity Units : 250.00
Total Bill        : Rs. 550.00

## How to Run

Compile the program using:

gcc main.c -o bill

Then run:

./bill

## Project Purpose

This project was created to practice C programming concepts such as:

- Variables
- User Input
- Conditional Statements
- Arithmetic Operations
