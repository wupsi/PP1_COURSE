#include<iostream>
using namespace std;

int main(){
    
    int n, digits = 0; cin >> n;
    int arr[10000];

    while(n){
        int x = n % 10;
        arr[digits] = x;
        n /= 10;
        digits++;
    }

    for(int i = 0; i < digits; i++)
        cout << arr[i];

    return 0;
}

