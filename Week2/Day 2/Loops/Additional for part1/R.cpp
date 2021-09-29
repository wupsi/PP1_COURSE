#include <iostream>
using namespace std;

int main(){

    int a , b , c , d, e, cnt = 0; cin >> a >> b >> c >> d >> e;
    
    for (int i = 0; i <= 1000; i++)
        if (a * i * i * i + b * i * i + c * i + d == 0 and i - e != 0) cnt++;

    cout << cnt;

    return 0;
}