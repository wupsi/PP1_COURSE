#include <iostream>
using namespace std;

int main(){

    int n, prod = 1, sum = 1; cin >> n;

    for(int i = 1; i <= n; i++){
        prod += 1;
        sum += prod;
    }
    cout << sum;

    return 0;
}
