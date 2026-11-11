// Check whether a number is prime.
// Only divisors up to sqrt(n) need to be checked -> O(sqrt(n)).
//
// Input:  29
// Output: prime
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 1) {
        cout << "neither prime nor composite" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;
    return 0;
}
