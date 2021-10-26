#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(num % 10 == 7) cnt++;
    }

    cout << cnt;

    return 0;
}

// Input:
// 4
// 10 71 70 7

// 10 % 10 = 0, 0 != 7, cnt = 0;
// 71 % 10 = 1, 1 != 7, cnt = 0;
// 70 % 10 = 0, 0 != 7, cnt = 0;
// 7 % 10 = 7, 7 == 7, cnt = 1;


// Output:
// 1