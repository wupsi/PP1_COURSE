#include <iostream>
using namespace std;

int main(){
    string s, sub; cin >> s >> sub;
    char c; cin >> c;

    for(int i = 0; i < s.size(); i++){
        bool found = false;
        for(int j = 0; j < sub.size(); i++)
            if(s[i] == sub[j]) found = true;
        cout <<(found ? c : s[i]);
    }
}