#include <iostream>
using namespace std;

int main(){

    int n, m, posx, posy; cin >> n >> m >> posx >> posy;
    string s = "";
    char arr[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    

    while(true){
        if(arr[posx][posy] == '*'){
            cout << 'N';
            return 0;
        }
        if(tolower(arr[posx][posy]) == 'x'){
            cout << 'X';
            return 0;
        }
        if(arr[posx][posy] == 'D') cout << arr[posx++][posy];
        if(arr[posx][posy] == 'R') cout << arr[posx][posy++];
        if(arr[posx][posy] == 'U') cout << arr[posx--][posy];
        if(arr[posx][posy] == 'L') cout << arr[posx][posy--];
    }
}

// Input 1:
// 4 6
// 0 0
// DRRRD*
// RU**D*
// ****D*
// *xLLL*

// DRRRD*
// RU**D*
// ****D*
// *xLLL*


// Input 2:
// 5 5
// 3 3
// **R*x
// *RU**
// *UL**
// **UL*
// *****

// **R*x
// *RU**
// *UL**
// **UL*
// *****
// LULURURN