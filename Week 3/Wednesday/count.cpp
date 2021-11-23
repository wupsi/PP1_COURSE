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

    int x; cin >> x;
    cout << count(v.begin(), v.end(), x);
}

// Input:
// 6
// 1 1 2 3 4 5
// 1

// Output:
// 2