#include <iostream>
using namespace std;

int main(){
    int n, num; cin >> n;
    long long sum = 0;

    for(int i = 0; i < n; i++){
        cin >> num;
        sum += num;
    }
    cout << sum;
}