#include <iostream>
#include <cmath>
using namespace std;

int arr[100000], arr2[100000], arr3[1000000];

void connect(int n){

    for(int i = 0; i < n + n; i++){
        if(i < n) arr3[i] = arr[i];
        else arr3[i] = arr2[i - n];
    }

    for(int i = 0; i < n + n; i++){
        cout << arr3[i] << " ";
    }
}

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
        cin >> arr2[i];

    connect(n);

    return 0;
}

// [0, 12)
// 0, 1, 2, 3, 4, 5, | 6, 7, 8, 9, 10, 11