// std::vector basics: construction, adding/removing elements,
// size vs capacity, iteration and iterators.
#include <iostream>
#include <vector>
using namespace std;

void print(const string& label, const vector<int>& v) {
    cout << label << " (size " << v.size() << "): ";
    for (int val : v) cout << val << " ";
    cout << endl;
}

int main() {
    vector<int> a;        // empty vector
    vector<int> b(10);    // 10 elements, all 0
    vector<int> c(5, 9);  // 5 elements, all 9

    print("a", a);
    print("b", b);
    print("c", c);

    // push_back adds to the end; pop_back removes the last element
    for (int i = 1; i <= 5; i++) a.push_back(i * 10);
    print("a after push_back", a);
    a.pop_back();
    print("a after pop_back", a);

    // Access: [] is unchecked, at() throws std::out_of_range when out of bounds
    cout << "a[0] = " << a[0] << ", a.at(1) = " << a.at(1) << endl;
    cout << "front = " << a.front() << ", back = " << a.back() << endl;

    // Iterators: begin() points to the first element, end() is one past the last
    cout << "*c.begin() = " << *c.begin() << endl;
    cout << "a using iterators: ";
    for (auto it = a.begin(); it != a.end(); ++it) cout << *it << " ";
    cout << endl;

    // capacity >= size; the vector grows its storage as needed
    cout << "a.size() = " << a.size() << ", a.capacity() = " << a.capacity() << endl;

    a.clear();
    cout << "a.empty() after clear: " << boolalpha << a.empty() << endl;
    return 0;
}
