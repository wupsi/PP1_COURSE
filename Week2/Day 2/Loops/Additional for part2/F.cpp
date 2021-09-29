#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double n, sum = 0; cin >> n;

    for(long long i = 1; i <= n; i++)
        sum += 1 / (i * i * 1.0);

    cout << sum;

    return 0;
}
