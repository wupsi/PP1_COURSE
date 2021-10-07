#include <iostream>
using namespace std;

int main(){

    int n, m, max = -99999999, cnt = 0; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]) max = arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(max == arr[i][j]){
                cnt++;
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}

// 4 3
// 0 - Нурхан: 1 2 7, sum = 10
// 1 - Дамир: 1 3 5, sum = 9
// 2 - Амирхан: 4 1 7, sum = 12
// 3 - Лейла: 2 3 7, sum = 12

// Output: 3