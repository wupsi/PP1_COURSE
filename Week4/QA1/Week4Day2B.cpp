#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main(){

    int n, cnt = 0; cin >> n;

    for(int i = 2; cnt < n; i++){
        if(isPrime(i)) cnt++;
        if(cnt == n) cout << i;
    }

    return 0;
}