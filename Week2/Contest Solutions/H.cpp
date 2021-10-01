#include <iostream>
using namespace std;

int main(){

    int n, d, sum = 0; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> d;
        sum += d;
    }
    cout << sum / (n * 1.0);

    return 0;
}