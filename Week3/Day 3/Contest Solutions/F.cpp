#include <iostream>
using namespace std;

int main(){

    string s; getline(cin, s);
    int n, cnt = 0; cin >> n;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') cnt++;
        if(cnt == n - 1 and s[i] != ' ') cout << s[i];
    }
}