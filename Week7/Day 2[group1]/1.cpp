#include <iostream>
using namespace std;

int main(){

    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum << endl;
    }

    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j][i];
        }
        cout << "The sum of column number " << i + 1 << " is " << sum << endl;
    }

    return 0;
}

// sum = 0;
// i = 0;
// j = 0, arr[0][0] = 1, sum += arr[0][0] = 1;
// j = 1, arr[0][1] = 2, sum += arr[0][1] = 3;
// j = 2, arr[0][2] = 4, sum += arr[0][2] = 7;
// j = 3, arr[0][3] = 6, sum += arr[0][3] = 13;
// sum = 0;

// i = 1
// j = 0, arr[1][0] = 2, sum += arr[1][0] = 2;
// j = 1, arr[1][1] = 5, sum += arr[1][1] = 7;
// j = 2, arr[1][2] = 7, sum += arr[1][2] = 14;
// j = 3, arr[1][3] = 3, sum += arr[1][3] = 17;
// sum = 0

// 3 4
// 1 2 4 6
// 2 5 7 3
// 1 4 5 94
