#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    multimap<char, int> mp;
    multimap<char, int> :: iterator it;

    for(int i = 0; i < n; i++){
        char c; cin >> c;
        int x; cin >> x;
        mp.insert(make_pair(c, x));
    }

    cout << endl;
    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;
}
