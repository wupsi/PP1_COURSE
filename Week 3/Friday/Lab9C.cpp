#include <iostream>
#include <map>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;
    map<int, int> mp;
    map<int, int> :: iterator it;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }

    for(it = mp.begin(); it != mp.end(); it++)
        if(it->second >= 2) cnt++;
    
    cout << cnt;
}

// n = 4

// i = 0
// x = 1
// mp[1]++;
// mp: 1[1];

// i = 1
// x = 2
// mp[2] = 1;
// mp: 1[1], 2[1];

// i = 2
// x = 2
// mp[2] = 2;
// mp: 1[1], 2[2];

// i = 3
// x = 3
// mp[3] = 1;
// mp: 1[1], 2[2], 3[1];

// если будет еще один ввод:
// x = 1
// mp[1] = 2;
// mp: 1[2], 2[2], 3[1];