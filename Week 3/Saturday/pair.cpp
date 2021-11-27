#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main(){

    // int n; cin >> n;
    // vector<pair<int, int> > v;

    // for(int i = 0 ; i < n; i++){
    //     int x, y; cin >> x >> y;
    //     v.push_back(make_pair(x, y));
    // }
    // sort(v.begin(), v.end());

    // cout << endl;
    // for(int i = 0; i < n; i++)
    //     cout << v[i].first << " " << v[i].second << endl; 


    map<int, pair<string, string> > mp;
    map<int, pair<string, string> > :: iterator it;

    int m; cin >> m;

    for(int i = 0; i < m; i++){
        int x; cin >> x;
        string name, surname; cin >> name >> surname;
        mp.insert(make_pair(x, make_pair(name, surname)));   
    }

    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second.first << " " << it->second.second << endl;    
}
