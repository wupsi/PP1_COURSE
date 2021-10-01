#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        int x, cnt = 0; cin >> x;
        while(x){
            cnt++;
            x /= 10;
        }
        arr[i] = cnt;
    }
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
}

