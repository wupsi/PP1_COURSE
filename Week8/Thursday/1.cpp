#include <iostream>
using namespace std;

int main(){

    int n, m, k; cin >> n >> m >> k;
    char arr[n][m];
    int arrCnt[k];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            arr[i][j] = '#';

    for(int i = 0; i < k; i++){
        int x, y, cnt = 0; cin >> x >> y;
        int l = x, r = y;
        arr[x][y] = 'x';

        while(r < m){
            if(arr[l][r] != 'x' and arr[l][r] != '*') arr[l][r] = '*', cnt++;
            r++;
            if(arr[l][r] == 'x' or arr[l][r] == '*') break;
        }
        r = y;

        while(l < n){
            if(arr[l][r] != 'x' and arr[l][r] != '*') arr[l][r] = '*', cnt++;
            l++;
            if(arr[l][r] == 'x' or arr[l][r] == '*') break;
        }
        l = x;

        while(r >= 0){
            if(arr[l][r] != 'x' and arr[l][r] != '*') arr[l][r] = '*', cnt++;
            r--;
            if(arr[l][r] == 'x' or arr[l][r] == '*') break;
        }
        r = y;

        while(l >= 0){
            if(arr[l][r] != 'x' and arr[l][r] != '*') arr[l][r] = '*', cnt++;
            l--;
            if(arr[l][r] == 'x' or arr[l][r] == '*') break;
        }
        l = x;

        arrCnt[i] = cnt;
    }

    for(int i = 0; i < k; i++)
        cout << i + 1 << " ladya: " << arrCnt[i] << endl;
}
// Input:
// 3 3
// 3
// 0 0
// 1 1
// 2 0

// x**
// *x*
// x*#

// 4
// 2
// 0