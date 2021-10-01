#include <iostream>
using namespace std;

int main(){

    int n, m, sum = 0; cin >> n >> m;

    for(int i = 0; i < n; i++)
        sum += m + i * 10;
    cout << sum / 60;

    return 0;
}