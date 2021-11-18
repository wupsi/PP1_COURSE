#include <iostream>
#include <map>
using namespace std;

int main(){

    string s; cin >> s;
    map<char, int> mp;
    map<char, int> :: iterator it;

    for(int i = 0; i < s.size(); i++)
        mp[s[i]] += 1;

    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;
}

// s = "123455698765"