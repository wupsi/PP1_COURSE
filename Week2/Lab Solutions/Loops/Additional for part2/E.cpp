#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a, n, sum = 1, prod = 1; cin >> a >> n;

    for(int i = 1; i <= n; i++){
        prod *= a;
        sum += prod;
    }
    cout << sum;

    return 0;
}
