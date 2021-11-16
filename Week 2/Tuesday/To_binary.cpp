#include <iostream>
#include <algorithm>
using namespace std;

string bin(int num){
    string ans = "";
    while(num > 0){
        ans += (num % 2) + '0';
        num /= 2;
    }
    while(ans.size() != 4) ans += '0';
    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){

    int a, b; cin >> a >> b;
    int cnt = 0;

    string first = bin(a);
    string second = bin(b);
    cout << first << endl << second << endl;
    for(int i = 0; i < 4; i++) if(first[i] == second[i]) cnt++;
    cout << cnt;
}