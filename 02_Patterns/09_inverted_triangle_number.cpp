// Inverted right-angled triangle: starts with n printed n times
// and shrinks by one each row.
//
// Input: 4
// 4444
// 333
// 22
// 1
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = n;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << i;
            j += 1;
        }
        cout << endl;
        i -= 1;
    }
    return 0;
}
