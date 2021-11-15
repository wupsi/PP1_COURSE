#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> v;
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    cout << "Vector:\n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    fill(v.begin(), v.end(), gens);

    cout << "\nVector after fill:\n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

// fill(begin, end, val);
// [v.begin(), v.end()) - val;