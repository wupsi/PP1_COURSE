#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n];

    arr[0] = 1; 
    arr[1] = 1;
    for(int i = 1; i <= n; i++) 
        arr[i] = arr[i - 1] + arr[i - 2];
        
    cout << arr[n - 1];

    return 0;
}