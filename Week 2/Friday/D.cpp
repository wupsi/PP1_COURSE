#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    map<string, bool> mp;
    vector<string> v;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        mp[s] = true;
    }

    int m; cin >> m;

    for(int i = 0; i < m; i++){
        string s; cin >> s;
        if(mp[s]) v.push_back(s);
    }

    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
}

// mp:
// Aida[true]
// Almat[true]
// Temirulan[true]
// Albert[true]
// Ulzhan[true]

// v: [Almat, Aida]