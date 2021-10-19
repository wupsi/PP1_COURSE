#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        while(num > 0){
            if(num % 10 == 0) cnt++;
            num /= 10;
        }
    }

    cout << cnt;

    return 0;
}

// 100

// 100 % 10 = 0, cnt++, 100 / 10 = 10
// 10 % 10 = 0, cnt++, 10 / 10 = 1
// 1 % 10 = 1, 1 / 10 = 0