#include <iostream>
using namespace std;

int main(){
    int n, m, min = 100000000, subject = 1;
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        if(min > sum){
            min = sum;
            subject = i + 1;
        }
    }
    cout << subject;
}

// 3 4
// 0 78 2 3
// 9 7 32 6
// 67 3 29 2

// [0, 0], [0, 1], [0, 2], [0, 3]
// [1, 0], [1, 1], [1, 2], [1, 3]
// [2, 0], [2, 1], [2, 2], [2, 3]


// i = 0
// sum = 0
// j = 0, j = 1, j = 2, j = 3
// sum += arr[i][j]
// sum += arr[0][0] -> sum = 0
// sum += arr[0][1] -> sum = 78
// sum += arr[0][2] -> sum = 80
// sum += arr[0][3] -> sum = 83
// sum = 83

// sum = 0
// i = 1
// j = 0, j = 1, j = 2, j = 3
// sum += arr[1][0] -> sum = 9
// sum += arr[1][1] -> sum = 16
// sum += arr[1][2] -> sum = 48
// sum += arr[1][3] -> sum = 54
// sum = 54

// sum = 0
// i = 2
// j = 0, j = 1, j = 2, j = 3
// sum += arr[2][0] -> sum = 67
// sum += arr[2][1] -> sum = 70
// sum += arr[2][2] -> sum = 99
// sum += arr[2][3] -> sum = 101
// sum = 101