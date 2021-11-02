#include <iostream>
using namespace std;

int main(){

    int n, max = -9999999, posx = 0, posy = 0; cin >> n;
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

    cout << posx + 1 << " " << posy + 1;
 
    return 0;
}
