// Right-angled triangle of stars: row r has r stars.
//
// Input: 4
// *
// **
// ***
// ****
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            cout << "*";
            col += 1;
        }
        cout << endl;
        row += 1;
    }
    return 0;
}
