#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;

        while (n != 0) {
            int m = n % 10;
            prod = prod * m;
            sum = sum + m;
            n = n / 10;
        }

        return prod - sum;
    }
};

int main() {
    Solution sol;
    int testInput = 234;
    int result = sol.subtractProductAndSum(testInput);

    std::cout << "Input: " << testInput << std::endl;
    std::cout << "Result: " << result << std::endl; // Output: 15

    return 0;
}