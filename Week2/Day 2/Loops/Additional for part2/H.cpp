#include <iostream>
using namespace std;

int main(){

    int n, ans = 1, sum = 0; cin >> n;

    for(int i = 0; i <= n; i++){
        sum += ans;
        ans *= 2;
    }
    cout << sum;

    return 0;
}
