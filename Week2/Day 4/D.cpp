#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    int arr[1000];

    while(true){
        int x; cin >> x;
        if(x == -1) break;
        arr[cnt] = x;
        cnt++;
    }
    cout << cnt << "\n";
    
    for(int i = 0; i < cnt; i++) 
        cout << arr[i] << " ";
}
