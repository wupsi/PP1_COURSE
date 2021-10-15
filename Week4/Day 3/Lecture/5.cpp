#include <iostream>
using namespace std;

int arr[100000];

void Reverse(int size){
    for(int i = size - 1; i >= 0; i--)
        cout << arr[i] << " ";
}

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Reverse(n);

    return 0;
}