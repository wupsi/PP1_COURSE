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

    int x; cin >> x;

    int cnt = count(v.begin(), v.end(), x);

    cout << (cnt == 1 ? "Unique" : "Not unique");
}
