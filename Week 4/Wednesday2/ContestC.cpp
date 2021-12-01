#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

    string s;
    map<string, int> cnt;
    map<int, vector<string>, greater<int> > mp;
    map<string, int> :: iterator it;
    map<int, vector<string> > :: iterator it1;
    
    while(cin >> s) cnt[s]++;
    
    for(it = cnt.begin(); it != cnt.end(); it++)
        mp[it->second].push_back(it->first);

    for(it1 = mp.begin(); it1 != mp.end(); it1++)
        for(int i = 0; i < it1->second.size(); i++)
            cout << it1->second[i] << ": " << it1->first << endl;
    
}
// 1: ["but", "repeating", "some"]
// 3: ["words"]