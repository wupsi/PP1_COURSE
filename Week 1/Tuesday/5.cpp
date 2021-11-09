// Input:
// 3 3
// 1 2 7, max = 7, sum = 10 - Александра
// 1 3 5, max = 5, sum = 9 - Нуртая
// 4 1 7, max = 7, sum = 12 - Зарины

// Александр - 7, 10
// Зарина - 7, 12

// Output:
// 2


#include <iostream>
using namespace std;

int main(){

    int n, m, max = -9999999, maxsum = 0, pos = 0; 
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]) max = arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int sum = 0;
        bool ok = false;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
            if(arr[i][j] == max) ok = true;
        }
        if(ok == true){
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
// 1 2 7, ok = true
// 1 3 5, ok = false
// 4 1 7, ok = true
