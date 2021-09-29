#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;

    for (int i = 1; i <= sqrt(n) ; i++)
        if(n % i == 0) cnt += 2;

    if(double(sqrt(n)) == int(sqrt(n))) cout << cnt - 1;
    else cout << cnt;
    
    return 0;
}