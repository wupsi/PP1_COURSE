#include <iostream>
using namespace std;

void zip(int arr[], int zeros, int another, int size, int i){
    if(another == size - cnt){
            
    }
    if(arr[i] != 0){
        cout << arr[i] << " ";
        another++;
    }
    zip(arr, cnt, size, ++i);
}

int main(){

    int x, zero = 0;
    int arr[10000];
    int i = 0;
    while(cin >> x){
        arr[i] = x;
        if(x == 0) zero++;
        i++;
    }

    zip(arr, zero, i, 0);

    return 0;
}