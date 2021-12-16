#include <iostream>
using namespace std;

int main(){

    int n, max = -1e9, cnt = 0; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];


    int left, right; cin >> left >> right;

    for(int i = left; i <= right; i++)
        if(arr[i] > max) max = arr[i], cnt++;

    cout << cnt;
}
