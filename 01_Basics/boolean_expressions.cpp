// Relational operators produce a bool. cout prints true as 1 and false as 0
// (use `boolalpha` to print the words instead).
//
// Output:
//   3 <= 3 : 1
//   3 <= 3 : true
#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 3;
    bool result = (a <= b);

    cout << "3 <= 3 : " << result << endl;
    cout << "3 <= 3 : " << boolalpha << result << endl;
    return 0;
}
