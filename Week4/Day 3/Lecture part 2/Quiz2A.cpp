#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0, min = 99999999, max = -99999999; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    for(int i = min; i <= max; i++){
        int check = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] != i){
                check++;
            }            
        }
        if(check == n) cnt++;
    }
    cout << cnt;
}

// 4
// 6 2 3 8

// min = 2; max = 8;
// 2 3 4 5 6 7 8

// 4, 5, 7
// cnt = 3;