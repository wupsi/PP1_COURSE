#include <iostream>
using namespace std;

int main(){

    int n, l, r; cin >> n >> l >> r;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < l - 1; i++) cout << arr[i] << " ";
    for(int i = r - 1; i >= l - 1; i--) cout << arr[i] << " ";
    for(int i = r; i < n; i++) cout << arr[i] << " ";
    
}

// n = 6, l = 3, r = 4
// [5, 6, 12, 4, 7, 8]
// [5, 6, 4, 12, 7, 8]

// [5, 6]
// [12, 4]
// [7, 8]

// arr[3] = 4
// arr[2] = 12