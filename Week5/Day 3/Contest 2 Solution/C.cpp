#include <iostream>
#include <algorithm>
using namespace std;

void sorted(int arr[], int index, int size){
    sort(arr, arr + index - 1);
    sort(arr + index, arr + size, greater<int>());

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main(){

    int n, m; cin >> n >> m;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sorted(arr, m, n);
}
