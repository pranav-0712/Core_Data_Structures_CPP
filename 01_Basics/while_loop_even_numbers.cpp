// while loop: print every even number from 2 to 100.
//
// Output: 2 4 6 ... 98 100
#include <iostream>
using namespace std;

int main() {
    int n = 0;

    while (n < 100) {
        n += 2;
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
