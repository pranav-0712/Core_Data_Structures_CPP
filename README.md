# C++ Programming 101: Basic Concepts

A foundational C++ program demonstrating core concepts like functions, variables, input/output tracking, conditional structures, and iteration loops. [cite_start]This repository serves as a starter guide for my 3rd-semester IT programming labs[cite: 258].

---

## 📋 Table of Contents
* [Features Demonstrated](#-features-demonstrated)
* [Code Walkthrough](#-code-walkthrough)

---

## ✨ Features Demonstrated

[cite_start]This script covers seven essential pillars of C++ syntax[cite: 258]:
1. [cite_start]**Basic Functions:** Creating standalone modular code blocks using the `void` keyword[cite: 258].
2. [cite_start]**The Main Entry Point:** Structuring the required `int main()` block[cite: 258].
3. [cite_start]**Data Types & Variables:** Working with `std::string`, `int`, `double`, and `bool`[cite: 258].
4. [cite_start]**Standard I/O:** Capturing user inputs via `std::cin` and printing formatted strings with `std::cout`[cite: 258].
5. [cite_start]**Conditional Logic:** Making decisions using standard `if/else` checks[cite: 258].
6. [cite_start]**For Loops:** Implementing iterative decrement loops (countdown style)[cite: 258].
7. [cite_start]**While Loops:** Controlling flow safely with conditional increment loops[cite: 258].

---

## 🔍 Code Walkthrough

[cite_start]Here is a quick look at the logic driving the program[cite: 258]:

### User Configuration Variables
```cpp
std::string name;       // Holds text input
int currentYear = 2026; // Holds whole numbers
double targetGpa = 9.5; // Holds decimal values
bool likesCoding = true; // Holds boolean states

for (int i = 3; i > 0; i--) {
    std::cout << "Year minus " << i << "...\n";
}