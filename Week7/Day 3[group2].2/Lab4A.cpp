#include <iostream>
using namespace std;

int main(){

    int n, max = -99999999, posx = 0, posy = 0; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]){
                max = arr[i][j];
                posx = i;
                posy = j;
            }
        }
    }

    cout << posx << " " << posy;

    return 0;
}

// 4
// -1 7 3 2
// 9 2 4 1
// 8 2 -6 4
// 1 4 9 4

// max = -99999999, posx = 0, posy = 0

// arr[0][0] = -1
// if max < arr[0][0] -> -9999999 < -1, max = -1, posx = 0, posy = 0;

// arr[0][0] = 7
// if max < arr[0][1] -> -1 < 7, max = 7, posx = 0, posy = 1;