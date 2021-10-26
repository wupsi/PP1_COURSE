#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    // while(i <= n){
    //     sum = sum + i;
    //     i++;
    // }

    // do{
    //     sum = sum + i;
    //     i++;
    // }while(i <= n);

    cout << sum;

    return 0;
}

// n = 5
// sum = 0

// i = 1, sum = 1;
// i = 2, sum = 3;
// i = 3, sum = 6;
// i = 4, sum = 10;
// i = 5, sum = 15;
