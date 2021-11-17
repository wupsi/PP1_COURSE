#include <iostream>
using namespace std;

int arr[101];

int findNthNumber(int x){
    int cnt = 0;
    for(int i = 1; i < 101; i++){
        if(arr[i] == 0) cnt++;
        if(cnt == x) return i;
    }
}

int main(){

    for(int i = 1; i < 101; i++) arr[i] = 0;

    int x;
    while(cin >> x) arr[x]++;
    arr[x]--;

    cout << findNthNumber(x);
}
// 1 5 6 8 9 10 12 13 14 15 16