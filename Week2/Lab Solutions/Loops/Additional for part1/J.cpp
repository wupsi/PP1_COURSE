#include <iostream>
using namespace std;

int main(){

    int num, sum = 0;

    for(int i = 0; i < 100; i++){
        cin >> num;
        sum += num;
    }
    cout << sum;

    return 0;
}