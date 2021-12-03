#include <iostream>
#include <map>
using namespace std;

int main(){

    string s; cin >> s;
    map<char, bool> mp;

    for(int i = 0; i < s.size(); i++){
        if(mp[s[i]] == false) cout << s[i];
        mp[s[i]] = true;
    }


}

// s = "ACABACA"

// i = 0
// s[i] = 'A'
// mp[s[i]] = mp['A'] -> cout

// i = 1
// s[i] = 'C'
// mp['C'] -> cout

// i = 2
// s[i] = 'A'
// m['A']