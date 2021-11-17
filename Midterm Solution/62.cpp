#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int ans = 1, q = 0;

    for(int i = 0; i < s.size(); i++){
        ans += s[i] - 'A' + q;
        q += 26;
    }    
    cout << ans;

    return 0;
}