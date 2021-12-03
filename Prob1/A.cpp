#include <iostream>
using namespace std;

int main(){

    int n, m; cin >> n >> m;
    int ans = n * m;
    int arr[n][m];

    for(int y = 0; y < m; y++){
        for(int x = 0; x < n; x++){
            // if(y % 2 == 0) cout << "[" << x << ", " << y << "]\n";
            // else cout << "[" << n - x - 1 << ", " << y << "]\n";
            if(y % 2 == 0) arr[x][y] = ans--;
            else arr[n - x - 1][y] = ans--;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

}
// Input:
// 3 4

// [0, 0] - 12: x = 0, y = 0
// [1, 0] - 11: x = 1, y = 0
// [2, 0] - 10: x = 2, y = 0
// [2, 1] - 9: x = 2, y = 1
// [1, 1] - 8: x = 1, y = 1
// [0, 1] - 7: x = 0, y = 1
// [0, 2] - 6: x = 0, y = 2
// [1, 2] - 5: x = 1, y = 2
// [2, 2] - 4: x = 2, y = 2

// x = 0
// n = 3
// 3 - 0 - 1 = 2

// x = 1
// 3 - 1 - 1 = 1

// x = 2
// 3 - 2 - 1 = 0