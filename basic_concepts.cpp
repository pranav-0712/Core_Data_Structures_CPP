#include <iostream>  // Required for printing text and getting input
#include <string>    // Required to use text variables (strings)

// 1. Creating a Basic Function
// Functions let you bundle code to reuse it later. 
// "void" means this function performs an action but doesn't return a number.
void welcomeMessage() {
    std::cout << "=======================================\n";
    std::cout << "    Welcome to C++ Programming 101     \n";
    std::cout << "=======================================\n\n";
}

// 2. The Main Function
// Every C++ program MUST have a main() function. This is where execution starts.
int main() {
    // Call our welcome function
    welcomeMessage();

    // 3. Variables and Data Types
    // You must tell C++ exactly what kind of data a variable will hold.
    std::string name;     // Holds text
    int currentYear = 2026; // Holds whole numbers (integers)
    double targetGpa = 9.5; // Holds decimal numbers
    bool likesCoding = true; // Holds true or false

    // 4. User Input (cin) and Output (cout)
    std::cout << "Enter your first name: ";
    std::cin >> name; // Takes what you type and stores it in 'name'

    std::cout << "\nHello, " << name << "! Let's check out some C++ basics.\n\n";

    // 5. Conditional Logic (if / else)
    // Making decisions based on conditions.
    if (likesCoding) {
        std::cout << "--> You enjoy coding! Keep pushing your limits.\n";
    } else {
        std::cout << "--> Coding takes practice, stick with it!\n";
    }

    // 6. Loops (for loop)
    // Used to repeat a block of code a specific number of times.
    std::cout << "\nCounting down to your target graduation...\n";
    for (int i = 3; i > 0; i--) {
        std::cout << "Year minus " << i << "...\n";
    }
    std::cout << "Goal Achieved!\n\n";

    // 7. Loops (while loop)
    // Repeats as long as a condition remains true.
    int reviewCount = 1;
    std::cout << "Reviewing code syntax:\n";
    while (reviewCount <= 2) {
        std::cout << " - Review session #" << reviewCount << " complete.\n";
        reviewCount++; // Increments the count so the loop eventually stops
    }

    std::cout << "\nProgram finished successfully.\n";

    // "return 0" tells the operating system that the program ran perfectly.
    return 0;
}