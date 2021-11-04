#include <iostream>
using namespace std;

int main(){

    int n, m, max = -9999999, posx = 0, posy = 0; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]){
                max = arr[i][j];
                posx = i;
                posy = j;
            }
        }
    }

    cout << max << endl << posx << " " << posy;

    return 0;
}
