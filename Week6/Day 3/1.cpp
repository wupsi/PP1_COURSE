#include <iostream>
using namespace std;

int main(){

    int n, even = 0, odd = 0; cin >> n;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        while(num > 0){
            if(num % 2 == 0) even++;
            else odd++;
            num /= 10;
        }
        cout << even << " " << odd << endl;
        even = 0, odd = 0;
    }

    return 0;
}

// Input:
// 4
// 1 1234 562094 33

// Output:
// 0 1
// 2 2
// 4 2
// 0 2

// num = 1234

// even++, 1234 / 10 = 123;
// odd++, 123 / 10 = 12;
// even++, 12 / 10 = 1;
// odd++, 1 / 10 = 0;
