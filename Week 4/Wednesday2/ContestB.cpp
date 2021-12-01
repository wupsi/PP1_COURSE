#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    map<int, vector<int> > mp;
    map<int, vector<int> > :: iterator it;

    for(int i = 0; i < n; i++){
        int x, cnt = 0; cin >> x;
        for(int j = 1; j <= x; j++)
            if(x % j == 0) cnt++;
        mp[cnt].push_back(x);
    }

    for(it = mp.begin(); it != mp.end(); it++){
        sort(it->second.begin(), it->second.end());
        for(int i = 0; i < it -> second.size(); i++)
            cout << it->second[i] << " ";
    }
}

// 6
// 12 8 7 23 55 11

// 12 - 1, 2, 3, 4, 6, 12; cnt = 6
// 8 - 1, 2, 4, 8; cnt = 4
// 7 - 1, 7; cnt = 2
// 23 - 1, 23; cnt = 2
// 55 - 1, 5, 11, 55; cnt = 4
// 11 - 1, 11, cnt = 2

// cnt = 2: 7, 23, 11
// cnt = 4: 8, 55
// cnt = 6: 12

// 2: [7, 11, 23]
// 4: [8, 55]
// 6: [12]
