#include <iostream>
using namespace std;

int main(){

    int n, mx = -9999999, cnt = 0; cin >> n;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(mx < num){
            mx = num;
            cnt++;
        }
    }
    cout << (cnt == n ? "YES" : "NO");
}