#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num == 1 or num == 0) return false;
    else if(num == 2) return true;
    for(int i = 2; i * i <= num; i++) if(num % i == 0) return false;
    return true;
}

int main(){

    int n; cin >> n;
    for(int i = 2; i <= n; i++)
        if(isPrime(i) == true) cout << i << " is prime!" << endl;    
}
