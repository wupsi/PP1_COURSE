#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int val = 0;

bool isPrime(int num){
    if(num == 1 or num == 0) return false;
    else if(num == 2) return true;
    for(int i = 2; i * i <= num; i++) if(num % i == 0) return false;
    return true;
}


long long gens(){
    while(true){
        val++;
        if(isPrime(val)) return val;
    }
}

int main()
{
    int n, l, r; cin >> n >> l >> r;
    vector<long long> v(n);
    generate(v.begin(), v.end(), gens);

    for(int i = l; i <= r; i++)
        cout << v[i] << " ";
    
}

// [0, 5) - gens;

// -8кв <= long long <= 8кв
// 0 <= unsigned long long <= 16кв