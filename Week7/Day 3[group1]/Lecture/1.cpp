#include <iostream>
using namespace std;

int main(){

    int n, sum = 0, i = 0; 
    cin >> n;

    // for(int i = 1; i <= n; i++){
    //     sum += i;
    //     // sum = sum + i;
    // }

    // while(i <= n){
    //     i++;
    //     cout << i << endl;
    // }

    do{
        sum += i;
        i++;
    }while(i <= n);

    cout << sum;

    return 0;
}

// for:
// n = 3, sum = 0
// i = 1, sum = 1
// i = 2, sum = 3
// i = 3, sum = 6

// cout << sum;

// 0 - False
// 1 - True

// while:
// n = 3, i = 0;
// i = 1, cout << 1;
// i = 2, cout << 2;
// i = 3, cout << 3;
// i = 4, cout << 4;