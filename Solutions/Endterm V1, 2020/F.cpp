#include <iostream>
using namespace std;

int main(){

    string s, t = "", max = ""; getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' or i == s.size() - 1){
            if(i == s.size() - 1) t += s[i];
            if(t.size() > max.size()) max = t;
            t = "";
        }
        else t += s[i];
    }

    cout << max;
}