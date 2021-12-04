#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int x = 0;

long long func(){

    long long ans = 1;

    for(int i = 1; i <= x; i++){
        ans *= x;
    }

    x++;
    return ans;
}

int main(){

    int n; cin >> n;
    vector<long long> v(n + 1);

    generate(v.begin(), v.end(), func);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

}

// v[0] = 1
// v[1] = 1
// v[2] = 4