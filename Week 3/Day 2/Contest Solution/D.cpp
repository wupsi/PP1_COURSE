#include <iostream>
using namespace std;

int main(){

    int n, m, x, cnt = 0; cin >> n >> m >> x;
    int arr[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == x){
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}