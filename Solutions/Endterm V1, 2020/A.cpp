#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    map<pair<int, int>, int> mp;
    map<pair<int, int>, int> :: iterator it;
    
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        int cnt = 0;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->first.first == max(x, y) and it->first.second == min(x, y)){
                cnt = it->second;
                break;
            }
        }
        cout << cnt << endl;
        mp[make_pair(max(x, y), min(x, y))]++;
    }
}

// 5
// 1 0
// 0 1
// 2 7
// 8 8
// 2 8

// 1 0, max = 1, min = 0
// cnt = 0
// mp[1, 0] = 1

// 0 1, max = 1, min = 0
// mp[1, 0] = 1, cnt = 1;
// mp[1, 0] = 2

// 2, 7
// mp[7, 2] = 1

// 8, 8
// mp[8, 8] = 1

// 2, 8
// mp[8, 2] = 1