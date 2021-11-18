#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    map<string, int> mp;
    map<string, int> :: iterator it;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        bool ok = false;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->first == s){
                ok = true;
                break;
            }
        }
        if(ok == false) mp[s] = i + 1;
    }

    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;
}