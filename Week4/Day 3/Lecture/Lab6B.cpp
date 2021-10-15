#include <iostream>
#include <cmath>
using namespace std;

void Diff(int size){
    int arr1[size], arr2[size];

    for(int i = 0; i < size; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < size; i++){
        cin >> arr2[i];
    }
    for(int i = 0; i < size; i++){
        cout << abs(arr1[i] - arr2[i]) << " ";
    }
}

int main(){

    int n; cin >> n;

    cout << Diff(n);

    return 0;
}