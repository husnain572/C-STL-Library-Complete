#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l = {5, 12, 14, 72, 110, 135, 127, 512, 514, 572, 1214, 1472, 8777, 9577, 1572, 3512};

    l.push_back(5);
    l.push_back(12);
    l.push_back(14);
    l.pop_back(); // Removes last

    for (auto val : l) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
