#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' and s[i] <= 'z') s[i] -= ' ';
    }

    cout << s;

    return 0;
}
    