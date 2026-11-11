// Post-increment (a++) returns the old value, then increments.
// Pre-increment (++a) increments first, then returns the new value.
//
// Output:
//   b = 1
//   c = 3
#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = a++;  // b = 1, a becomes 2
    int c = ++a;  // a becomes 3, c = 3

    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}
