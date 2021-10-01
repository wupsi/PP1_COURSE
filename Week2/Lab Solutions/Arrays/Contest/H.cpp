#include <iostream>
using namespace std;

int main(){
    int n, l, r, num; cin >> n >> l >> r;
    long long sum = 0;

    for(int i = 1; i <= n; i++){
        cin >> num;
        if(i >= l and i <= r) sum += num;
    }
    cout << sum;
}