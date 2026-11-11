// Short-circuit evaluation with && and pre/post increment.
//
// `a-- > 0` compares the OLD value of a (1 > 0 is true), then decrements a.
// Because the left side is true, the right side `++b > 2` is evaluated too.
// If the left side were false, ++b would never run (short-circuit).
//
// Output:
//   IF
//   0 3
#include <iostream>
using namespace std;

int main() {
    int b = 2;
    int a = 1;

    if (a-- > 0 && ++b > 2)
        cout << "IF\n";
    else
        cout << "else\n";

    cout << a << " " << b << endl;
    return 0;
}
