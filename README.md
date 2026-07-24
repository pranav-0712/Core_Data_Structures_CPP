# C++ Programming 101: Basic Concepts

A foundational C++ program demonstrating core concepts like functions, variables, input/output tracking, conditional structures, and iteration loops. This repository serves as a starter guide for my 3rd-semester IT programming labs.

---

## 📋 Table of Contents
* [Features Demonstrated](#-features-demonstrated)
* [Code Walkthrough](#-code-walkthrough)

---

## ✨ Features Demonstrated

This script covers seven essential pillars of C++ syntax:
1. **Basic Functions:** Creating standalone modular code blocks using the `void` keyword.
2. **The Main Entry Point:** Structuring the required `int main()` block.
3. **Data Types & Variables:** Working with `std::string`, `int`, `double`, and `bool`.
4. **Standard I/O:** Capturing user inputs via `std::cin` and printing formatted strings with `std::cout`.
5. **Conditional Logic:** Making decisions using standard `if/else` checks.
6. **For Loops:** Implementing iterative decrement loops (countdown style).
7. **While Loops:** Controlling flow safely with conditional increment loops.

---

## 🔍 Code Walkthrough

Here is a quick look at the logic driving the program:

### User Configuration Variables
```cpp
std::string name;       // Holds text input
int currentYear = 2026; // Holds whole numbers
double targetGpa = 9.5; // Holds decimal values
bool likesCoding = true; // Holds boolean states

for (int i = 3; i > 0; i--) {
    std::cout << "Year minus " << i << "...\n";
}