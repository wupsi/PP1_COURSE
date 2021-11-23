#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    vector<int> :: iterator it;
    vector<int> :: iterator last = unique(v.begin(), v.end());    

    cout << "vector after unique:\n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\n";
    for(it = v.begin(); it != last; it++)
        cout << *it << " ";
}