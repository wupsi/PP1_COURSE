#include <iostream>     
#include <algorithm>    
#include <vector>       
using namespace std;

int main () {

    vector<int> v;

    for (int i = 1; i < 10; ++i) v.push_back(i);
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

    rotate(v.begin(), v.begin() + 3, v.begin() + 6);

    cout << "\nAfter rotate:\n";
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

  return 0;
}

// [4 5 6 1 2 3 7 8 9]

// [a, b)
