#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v(n);

    fill(v.begin(), v.begin() + 3, 7);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

// 10
// 7 7 7 0 0 0 0 0 0 0