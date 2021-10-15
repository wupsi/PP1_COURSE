#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int num, ans = 0, digit = 1;

    for(int i = s.size() - 1; i >= 0; i--){
        num = s[i] - 48;
        num *= digit;
        ans += num;
        digit *= 10;
    }

    cout << ans;

    return 0;
}
    