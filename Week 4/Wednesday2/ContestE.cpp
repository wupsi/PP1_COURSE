#include<iostream>
#include<map>
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
        if(it->second >= 3) cnt++;
    
    cout << cnt;
}
