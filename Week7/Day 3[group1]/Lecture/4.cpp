#include <iostream>
using namespace std;

int main(){

    int n, zero = 0; cin >> n;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        while(num > 0){
            if(num % 10 == 0) zero++;
            num /= 10;
        }
    }

    cout << zero;

    return 0;
}

// 5
// 100 10 101 11 50

// 100, 100 % 10 == 0, zero++;
// 10, 10 % 10 == 0, zero++;
// 1, 1 % 10 == 1, zero;
// 0

// 10, 10 % 10 == 0, zero++;
// 1, 1 % 10 == 1, zero;
// 0

// 101
// 10
// 1
// 0