#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    map<int, int> mp;
    map<int, int> :: iterator it;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }

    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " - " << it->second << endl;
}