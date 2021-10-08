#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n], max = -9999999;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}