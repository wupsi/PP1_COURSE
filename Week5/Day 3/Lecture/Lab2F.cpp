#include <iostream>
using namespace std;

int main(){

    int n, sum = 0; cin >> n;

    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }

    // while(i <= n){
    //     sum = sum + i;
    //     i++;
    // }

    // do{
    //     sum += i;
    //     i++;
    // }while(i <= n);

    cout << sum;

    return 0;
}

// 3
// 6

// 1, 2, 3
// 6

// sum = 0

// sum = sum + 1 = 1

// sum = sum + 2 = 3

// sum = sum + 3 = 6