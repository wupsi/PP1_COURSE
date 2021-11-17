#include <iostream>     
#include <algorithm>    
#include <vector>       
using namespace std;

int main () {

    vector<int> v;
    int l, r; cin >> l >> r;

    for (int i = 0; i < 10; ++i) v.push_back(i);
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

    rotate(v.begin() + l, v.begin(), v.begin() + r  );

    cout << "\nAfter rotate:\n";
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

  return 0;
}   