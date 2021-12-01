#include<iostream>
#include<map>
using namespace std;

int main(){

    int n; cin >> n;
    map<int, bool, greater<int> > mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x] = true;
    }
    map<int, bool> :: iterator it = mp.begin();
    it++;

    cout << it->first;
}

// 1 - true
// 0 - false