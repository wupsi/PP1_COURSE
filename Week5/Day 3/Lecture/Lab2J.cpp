#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;

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

// num = 101

// num % 10 == 1; num / 10 = 10;
// num = 10;
 
// num % 10 == 0; cnt++; num / 10 = 1;
// num = 1;

// num % 10 == 1; num / 10 = 0;