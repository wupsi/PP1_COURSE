#include <iostream>
using namespace std;

bool isPalindrom(string str){
    for(int i = 0; i < str.size() / 2; i++)
        if(str[i] != str[str.size() - i - 1]) return false;
    return true;
}

int main(){

    string s, longest = ""; cin >> s;

    for(int i = 0; i < s.size(); i++)
        for(int j = i; j < s.size(); j++){
            string sub = s.substr(i, j - i + 1);
            if(isPalindrom(sub) and sub.size() > longest.size()) longest = sub;
        }
    cout << longest;
}

// "babab"
// s[0] == s[4]
// s[1] == s[3]
// s[2] == s[2]