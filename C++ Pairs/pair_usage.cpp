#include<iostream>
#include<vector>
using namespace std;

int main() {
    pair<int,int> p1 = {5, 12};
    cout << p1.first << " " << p1.second << endl;

    pair<char,int> p2 = {'a', 512};
    cout << p2.first << " " << p2.second << endl;

    pair<int,pair<char,int>> p3 = {1, {'a', 512}};
    cout << p3.first << endl;
    cout << p3.second.first << endl;
    cout << p3.second.second << endl;

    vector<pair<int,int>> vec = {{1, 2}, {3, 4}, {5, 6}};
    vec.push_back({512, 514});         // Inserting a pair
    vec.emplace_back(514, 572);        // More efficient insertion

    for (pair<int,int> p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
