#include <iostream>
#include <map>
using namespace std;

int main(){

    string s; cin >> s;
    map<char, int> mp;
    map<char, int> :: iterator it;

    for(int i = 0; i < s.size(); i++){
        if(!mp[s[i]]) cout << s[i];
        if(isdigit(s[i])) mp[s[i]]++;
    }

    // for(it = mp.begin(); it != mp.end(); it++)
    //     if(it->second != 3) cout << it->first;
}
// 'A' -> 'a'

// "Yerkin13let14561"
// 'Y' -> cout
// 'e' -> cout 
// 'r' -> cout 
// 'k' -> cout
// 'i' -> cout 
// 'n' -> cout
// '1' -> cout 
// mp['1'] = 1
// '3' -> cout
// mp['3'] = 1
// 'l' -> cout 
// 'e' -> cout
// 't' -> cout
// '1' -> ignore
// '4' -> cout
// mp['4'] = 1
