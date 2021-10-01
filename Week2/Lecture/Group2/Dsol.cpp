#include<iostream>
using namespace std;

int main(){
    
    int n, m, min = 99999999, s; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cin >> m;
    int amm[m];

    for(int i = 0; i < m; i++){
        cin >> amm[i];
        if(amm[i] % min == 0) cout << amm[i] << " ";
    }

    return 0;
}
