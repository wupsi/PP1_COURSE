#include <iostream>
using namespace std;

int main(){

    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    int small = 0, cap = 0;

    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' and s[i] <= 'Z') cap += a;
        else if(s[i] >= 'a' and s[i] <= 'z') small += b;
    }

    cout << min(small, cap);
}