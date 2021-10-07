#include <iostream>
using namespace std;

int main(){

    int n, m, maxsum = -9999999, pos = 0, max = -99999999; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]) max = arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int sum = 0;
        bool maxcheck = false;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
            if(max == arr[i][j]) maxcheck = true;
        }
        if(maxcheck == true){
            if(sum > maxsum){
                maxsum = sum;
                pos = i;
            }
        }
    }

    cout << pos;

    return 0;
}

// 4 3
// 0 - Нурхан: 1 2 7, sum = 10
// 1 - Дамир: 1 3 5, sum = 9
// 2 - Амирхан: 4 1 7, sum = 12
// 3 - Лейла: 2 3 7, sum = 12

// Output: 2