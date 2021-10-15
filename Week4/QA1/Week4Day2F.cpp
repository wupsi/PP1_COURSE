#include <iostream>
using namespace std;

void Lucky(int i){
    int cnt = 0, digit = 0, num = i;
    while(i){
        if(i % 10 == 3 or i % 10 == 8) cnt++;
        digit++;
        i /= 10;
    }
    if(digit == cnt) cout << num << endl;
}

int main(){

    int n; cin >> n;

    for(int i = 1; i <= n; i++) Lucky(i);

    return 0;
}

// if(0) - false
// if(1) - true

// 334 / 10 = 33, cnt = 0, digit = 1
// 33 / 10 = 3, cnt = 1, digit = 2
// 3 / 10 = 0, cnt = 2, digit = 3

// 338 / 10 = 33, cnt = 1, digit = 1
// 33 / 10 = 3, cnt = 2, digit = 2
// 3 / 10 = 0, cnt = 3, digit = 3


// 1243 % 10 = 3, cnt = 1, digit = 1, 1243 / 10 = 124;
// 124 % 10 = 4, cnt = 1, digit = 2, 124 / 10 = 12;
// 12 % 10 = 2, cnt = 1, digit = 3, 12 / 10 = 1;
// 1 % 10 = 1, cnt = 1, digit = 4, 1 / 10 = 0;

// cnt = 1, digit = 4 - false, return 0;