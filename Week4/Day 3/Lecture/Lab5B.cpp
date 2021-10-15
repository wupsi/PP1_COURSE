#include <iostream>
using namespace std;

int main(){

    string s, t; getline(cin, s);
    getline(cin , t);

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' and s[i] <= 'z') s[i] -= ' ';
    }
    cout << s << endl;
    cout << t;

    return 0;
}