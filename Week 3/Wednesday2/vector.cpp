#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v;

    // Enter vector elements
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    cout << "Vector: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl << "Vector front: " << v.front() << endl;
    cout << "Vector back: " << v.back() << endl;

    sort(v.begin(), v.end());

    cout << "Vector after sort: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    cout << (v.empty() ? "Vector empty" : "Vector is not empty");

    v.pop_back();
    
    cout << "\nVector after pop_back(): ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

// STL1
// vector
// set
// map