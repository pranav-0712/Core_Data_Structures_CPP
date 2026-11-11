// Pre-increment inside an expression: ++n increments n first,
// then the new value is used.
//
// Output: 100   (25 * 4)
#include <iostream>
using namespace std;

int main() {
    int n = 3;
    cout << (25 * (++n)) << endl;
    return 0;
}
