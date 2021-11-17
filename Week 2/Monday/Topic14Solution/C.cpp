#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    do{
        for(auto i : v) cout << i << ' ';
        cout << '\n';
    }
    while(next_permutation(v.begin(),v.end()));
}