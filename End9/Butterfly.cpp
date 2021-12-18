#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n * 2; i++){
        for(int j = 0; j < n * 2; j++){
            // cout << "[" << i << ", " << j << "] ";
            if((j <= i or j >= n * 2 - i - 1) and i <= n) cout << "*";
            else if((j <= n * 2 - i - 1 or j >= i) and i > n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
