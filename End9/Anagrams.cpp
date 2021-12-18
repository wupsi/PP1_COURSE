#include <bits/stdc++.h>
using namespace std;
map<string, vector<string>> mp;
vector<string> v;
string s;

int main(){
    while(cin >> s){
        string word = s;
        sort(s.begin(), s.end());
        string srt_word = s;
        mp[srt_word].push_back(word);
    }

    for(auto i : mp){
        for(string s : i.second) cout << s << ' ';
        cout << '\n';
    }
}