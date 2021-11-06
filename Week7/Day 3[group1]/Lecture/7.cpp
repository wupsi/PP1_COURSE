#include <iostream>
using namespace std;

int main(){

    int n, sum = 0, max = -9999999; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(max < arr[i]) max = arr[i];
    }

    for(int i = n - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }

    cout << "\nSum of array: " << sum << "\nMaximum number in array: " << max;

    return 0;
}

// i = 0
// cin >> arr[0];

// i = 1;
// cin >> arr[1];

// i = 2;
// cin >> arr[2];