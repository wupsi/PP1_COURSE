#include <iostream>
using namespace std;

int main(){

    int n, m, x, cnt = 0; cin >> n >> m >> x;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];       
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[j][i] == x){
                cnt++;
                break;
            }
            // cout << i << "," << j << " ";
        }
        // cout << endl;
    }

    cout << cnt;

    return 0;
}