#include <iostream>
#include <cmath>
using namespace std;

int arr[10000], arr2[10000];

void Diff(int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++){
        cin >> arr2[i];
    }

    for(int i = 0; i < size; i++){
        cout << abs(arr[i] - arr2[i]) << " ";
    }
}

int main(){

    int n; cin >> n;

    Diff(n);

    return 0;
}
