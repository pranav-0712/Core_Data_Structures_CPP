#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> b;
    vector<int> a(10); // Declares vector of size 10 initialized to 0
    vector<int> c(5, 9); // Declares vector of 5 elements, each with value 9

    // Print elements of vector c using a range-based loop
    for (int val : c) {
        cout << val << " ";
    }
    cout << endl;
    cout<<*c.begin();
    return 0;
}