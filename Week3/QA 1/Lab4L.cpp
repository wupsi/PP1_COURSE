// Minimum numbers

#include <iostream>
using namespace std;

int main(){

    int n, m, sum = 0; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    cout << "coordinates of min elements:\n";

    for(int i = 0; i < m; i++){
        int min = 9999999, posx = 0, posy = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][i] < min){
                min = arr[j][i];
                posx = j;
                posy = i;
            }
        }
        sum += min;
        cout << posx + 1 << ";" << posy + 1 << endl;
    }
    cout << "Their sum:\n" << sum;

    return 0;
}

// 2 x 3

// [-1, 2, 3]
// [-2, -4, 2]
