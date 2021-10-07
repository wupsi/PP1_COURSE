#include <iostream>
using namespace std;

int main(){

    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }


    return 0;
}

// 3 3
// 3 1 2, sum = 6
// 1 3 4, sum = 8
// 3 3 3, sum = 9