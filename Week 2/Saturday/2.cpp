#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n; cin >> n;
    multimap<int, int> mp;
    map<int, vector<int> > mp1;
    multimap<int, int> :: iterator it;
    map<int, vector<int> > :: iterator it1;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        mp.insert(make_pair(x, y));
    }

    cout << endl;
    for(it = mp.begin(); it != mp.end(); it++)
        mp1[it->first].push_back(it->second);

    for(it1 = mp1.begin(); it1 != mp1.end(); it1++){
        sort(it1->second.begin(), it1->second.end());
        for(int i = 0; i < it1->second.size(); i++)
            cout << it1->first << " " << it1->second[i] << endl;
    }
}
// 5
// 1 4
// 1 6
// 2 3
// 3 -1
// 1 5

// multimap mp:
// 1 4
// 1 6
// 1 5
// 2 3
// 3 -1

// map mp1:
// 1: [4, 5, 6]
// 2: [3]
// 3: [-1]

