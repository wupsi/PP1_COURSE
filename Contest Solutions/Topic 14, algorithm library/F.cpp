#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    map<string, int> mp;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        int x; cin >> x;
        mp[s] += x;
    }

    for(auto i : mp) cout << i.first << " " << i.second << endl;
}