#include <iostream>
#include <map>
using namespace std;

int main(){

    string s;
    map<char, int> first, last;
    map<char, int> :: iterator it, it1;

    for(char c = 'a'; c <= 'z'; c++){
        first[c] = 0;
        last[c] = 0;
    }

    while(cin >> s){
        string t = "";
        
        for(int i = 0; i < s.size(); i++)
            if(tolower(s[i]) >= 'a' and tolower(s[i]) <= 'z') t += tolower(s[i]);
        
        if(t.size() != 0) first[t[0]]++, last[t[t.size() - 1]]++;
    }

    for(it = first.begin(), it1 = last.begin(); it != first.end(), it1 != last.end(); it++, it1++)
        cout << it -> first << ": " << it -> second << ", " << it1 -> second << endl;

}