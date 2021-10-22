#include <iostream>
using namespace std;

int main(){

    int n, max = -99999999, min = 99999999; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == max) cout << min << " ";
        else cout << arr[i] << " ";
    }

    return 0;
}