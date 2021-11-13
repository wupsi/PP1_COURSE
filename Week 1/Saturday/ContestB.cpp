#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    string ans[n];

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(i == 0){
            if(s[0] >= 'a' and s[0] <= 'z') s[0] -= 32;
        }
        ans[i] = s;
    }

    for(int i = 0; i < n; i++){
        if(i != n - 1) cout << ans[i] << " ";
        else cout << ans[i];
    }
    cout << '.';

    return 0;
}
