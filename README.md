Simple Calculator in C

A simple console-based calculator program written in C that allows the user to perform basic arithmetic operations, modulus, and power calculations.

Features

Addition

Subtraction

Multiplication

Division

Power (a^b)

Modulus

Exit option

How to Use

Compile the program using a C compiler, e.g., gcc:

gcc calculator.c -o calculator -lm


Note: -lm is required for linking the math library (pow function).

Run the program:

./calculator


Follow the on-screen menu:

---Simple Calculator---
1) Add
2) Subtract
3) Multiply
4) Divide
5) Power(a^b)
6) Modulus
7) Exit


Enter your choice (1-7) and input the required numbers.

For modulus, only integer numbers are accepted.

Division by zero is not allowed.

The program runs in a loop until you select Exit (7).

Example Usage
---Simple Calculator---
1) Add
2) Subtract
3) Multiply
4) Divide
5) Power(a^b)
6) Modulus
7) Exit

Choose Between 1 to 7: 1
Enter Two Numbers: 5 3
Result is = 8.00

Notes

The program continuously prompts the user until they choose to exit.

Invalid inputs outside 1–7 will be rejected.

Decimal numbers can be used for addition, subtraction, multiplication, division, and power operations.
BY DIHAN

Author

Written by Dihan
