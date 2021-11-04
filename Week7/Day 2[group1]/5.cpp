#include <iostream>
using namespace std;

int main(){

    int n, m, max = -9999999, maxsum = 0, pos = 0; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]) max = arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int sum = 0;
        bool find = false;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
            if(arr[i][j] == max) find = true;
        }
        if(find == true){
            if(maxsum < sum){
                maxsum = sum;
                pos = i;
            }
        }
    }

    cout << pos;

    return 0;
}


// 3 3
// 1 2 7
// 1 3 5
// 4 1 7

// max = 7
// 1 2 7, find = true, sum = 10, pos = 0;
// 1 3 5, find = false;
// 4 1 7, find = true, sum = 12, pos = 2;