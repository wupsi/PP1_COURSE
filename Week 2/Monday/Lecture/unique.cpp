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

    vector<int> :: iterator it_end = unique(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

    vector<int> :: iterator it = v.begin();

    cout << endl;
    for(; it != it_end; it++) cout << *it << " ";
}
