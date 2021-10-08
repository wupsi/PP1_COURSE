#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 0) cnt++;
    }

    cout << cnt;

    return 0;
}