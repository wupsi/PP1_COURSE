#include <iostream>
using namespace std;

int arr[100000], arr2[100000];

int same(int n){
    int cnt = 0, m = n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i] == arr2[j]){
                arr2[j] = arr2[m - 1];
                m--;
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
        cin >> arr2[i];

    cout << same(n);

    return 0;
}