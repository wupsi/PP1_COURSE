#include <algorithm>
#include <iostream>
using namespace std;

int val = 0;

long long gens(){
    
    long long x = 1;

    for(int i = 1; i <= val; i++) x *= val;
    
    val++;

    return x;
}

int main()
{
    int n; cin >> n;
    vector<long long> v(n + 1);
    generate(v.begin(), v.end(), gens);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

// [0, 5) - gens;

// -8кв <= long long <= 8кв
// 0 <= unsigned long long <= 16кв