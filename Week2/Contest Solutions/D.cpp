#include <iostream>
using namespace std;

int main(){
    int n, m, x, min = 9999999; cin >> n;
    while(n--){
        cin >> x;
        if(min > x) min = x;
    }
    cin >> m;
    while(m--){
        cin >> x;
        if(x % min == 0) cout << x << " ";
    }
}