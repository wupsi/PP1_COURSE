#include <iostream>
using namespace std;

int main(){

    int n, m, cnt = 0; cin >> n >> m;
    char arr[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
            
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == '1'){
                int posx = i, posy = j;
                while(true){
                    bool find = false;
                    for(int k = posy; k < m; k++){
                        arr[posx][k] = '0'; 
                        if(posx + 1 < n and arr[posx + 1][k] == '1' and find == false){
                            posx = i + 1;
                            posy = k;
                            find = true;
                        }
                        if(k + 1 == '0' and k + 1 < m) break;
                    }
                    if(!find) break;
                }
                cnt++;
            }
        }
    }
    cout << cnt;
}   

// 5 5
// 10111
// 10000
// 11110
// 00110
// 11001

// posx = 0, posy = 0
// arr[0][0] = 0

// 00111
// 10000
// 11110
// 00110
// 11001

// posx = 1, posy = 0, find = true
// arr[1][0] = 0
// 00111
// 00000
// 11110
// 00110
// 11001

// posx = 2, posy = 0, find = true
// 00111
// 00000
// 00000
// 00110
// 11001

// posx = 3, posy = 2, find = true
// arr[3][2] = 0
// arr[3][3] = 0
// 00111
// 00000
// 00000
// 00000
// 11001

// posx = 0, posy = 2
// 00111
// 00000
// 00000
// 00000
// 11001

// arr[0][2] = 0
// arr[0][3] = 0
// 00001
// 00000
// 00000
// 00000
// 11001