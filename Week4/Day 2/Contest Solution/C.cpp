#include <iostream>
using namespace std;

int arr[100000];

int sumelements(int size){
    int sum = 0;
    
    for(int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sumelements(n);

    return 0;
}