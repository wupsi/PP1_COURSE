#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, one = 0, zero = 0;

    while(cin >> a){
        if(a == 1) one++;
        else zero++;
    }

    cout << abs(one - zero);
}