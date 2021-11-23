#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int val = 0;

int gens(){

    int ans = 1;

    for(int i = 1; i <= val; i++)
        ans *= val;

    val++;
    return ans;
}

int main(){

    int n; cin >> n;
    vector<int> v(n + 1);

    generate(v.begin(), v.end(), gens);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

// [v.begin(), v.end()] - gens

// 5
// 1 1 4 27 256 3125

// v[0] = 1
// v[1] = 1
// v[2] = 4
// v[3] = 27
// v[4] = 256
// v[5] = 3125