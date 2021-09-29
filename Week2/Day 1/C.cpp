#include <iostream>
using namespace std;

int main(){
    int n, x, mx = -9999999, mn = 9999999; cin >> n;
    while(n--){
        cin >> x;
        if(mx < x) mx = x;
        if(mn > x) mn = x;
    }
    cout << mx - mn;
}