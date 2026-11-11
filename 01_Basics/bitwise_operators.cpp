// Bitwise operators: AND (&), OR (|), NOT (~) and XOR (^).
//
//   a = 4  -> 0100
//   b = 9  -> 1001
//
// Output:
//   a & b = 0
//   a | b = 13
//   ~b    = -10
//   a ^ b = 13
#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 9;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "~b    = " << (~b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    return 0;
}
