#include <iostream>
#include <map>
#include <vector>
using namespace std;

string NotSymbols(string s){
    string ans = "";
    for(int i = 0; i < s.size(); i++)
        if(tolower(s[i]) >= 'a' and tolower(s[i]) <= 'z') ans += s[i];
    
    return ans;
}

int main(){

    string s; getline(cin, s);
    map<char, vector<pair<string, int> > > mp;

    for(char c = 'a'; c <= 'z'; c++){
        string t = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ' or i == s.size() - 1){
                if(i == s.size() - 1) t += s[i];
                string sub = NotSymbols(t);
                for(int j = 0; j < t.size(); j++)
                    if(tolower(t[j]) == c and tolower(t[j]) >= 'a' and tolower(t[j]) <= 'z') mp[c].push_back(make_pair(sub, j));
                
                t = "";
            }
            else t += s[i];
        }
    }

    for(auto i: mp){
        cout << "Occurences of: '" << i.first << "' : ";
        for(int j = 0; j < i.second.size(); j++)
            cout << "[" << i.second[j].first << "; " << i.second[j].second << "] ";
        cout << endl;
    }   
}