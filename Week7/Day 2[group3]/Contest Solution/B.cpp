#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    int m; cin >> m;

    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}