#include <iostream>
using namespace std;

int main(){

    int n, max = -9999999, min = 9999999; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == max) cout << min << " ";
        else cout << arr[i] << " ";
    }

    return 0;
}