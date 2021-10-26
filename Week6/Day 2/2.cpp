#include <iostream>
using namespace std;

int main(){

    int n, even = 0, odd = 0; cin >> n;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(num % 2 == 0) even++;
        else odd++;
    }

    cout << even << " " << odd;

    return 0;
}

// 5
// 1 2 3 4 5
// 1 % 2 == 1, even = 0, odd = 1;
// 2 % 2 == 0, even = 1, odd = 1;
// 3 % 2 == 1, even = 1, odd = 2;
// 4 % 2 == 0, even = 2, odd = 2;
// 5 % 2 == 1, even = 2, odd = 3;