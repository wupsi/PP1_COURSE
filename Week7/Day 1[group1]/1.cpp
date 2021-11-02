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
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// i = 0;
// j = 0, j = 1, j = 2, j = 3
// cout << endl;

// i = 1
// j = 0, j = 1, j = 2, j = 3
// cout << endl;

// i = 2
// j = 0, j = 1, j = 2, j = 3
// cout << endl;

// i = 3
// j = 0, j = 1, j = 2, j = 3
// cout << endl;
