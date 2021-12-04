#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v;
    vector<int> :: iterator it;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    vector<int> :: iterator last = unique(v.begin(), v.end());

    cout << "v: ";
    for(it = v.begin(); it != last; it++)
        cout << *it << " ";

}