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

    return 0;
}


// 3 5 10
// 1 2 6 10 4, cnt = 1
// 6 5 1 7 2, cnt = 1
// 4 4 10 2 10, cnt = 2 