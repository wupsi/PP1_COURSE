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

    rotate(v.begin(), v.begin() + 2, v.begin() + 5);

    cout << "v: ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

}
// 6
// v: 2 2 3 1 1 3
