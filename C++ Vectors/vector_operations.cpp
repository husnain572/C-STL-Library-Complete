#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {5, 12, 14, 72, 110,135,127,512,514,572,1214,1472,8777,9577,1572,3512};

    vec.push_back(135);          // Add at end
    vec.push_back(127);
    vec.pop_back();              // Remove last
    vec.emplace_back(135);       // Efficient add at end

    vec.insert(vec.begin()+2,3514); // Insert at position 2
    vec.erase(vec.begin());         // Remove first element

    vec.insert(vec.begin()+2,512);  // Insert 512 at index 2

    for (int itr:vec){
        cout << itr << " ";
    }
    cout << endl;

    // Access properties
    cout << "The size is: " << vec.size()
         << ", capacity is: " << vec.capacity()
         << ", the element at 3rd index is: " << vec.at(3)
         << ", the element at 4th index is: " << vec[4]
         << ", the front of vector is: " << vec.front()
         << ", and the element at back is: " << vec.back() << "\n";

    vec.clear();
    cout << "The vector is clear now." << endl;

    // Reinitialize for iterators
    vec = {5, 12, 14, 72, 110,135,127,512,514,572,1214,1472,8777,9577,1572,3512};

    // Normal iterator
    vector<int>::iterator itr;
    for(itr = vec.begin(); itr != vec.end(); itr++){
        cout << *(itr) << " ";
    }
    cout << endl;

    // Reverse iterator
    for(auto itr = vec.rbegin(); itr != vec.rend(); itr++){
        cout << *(itr) << " ";
    }
    cout << endl;

    return 0;
}
