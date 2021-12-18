#include <iostream>
using namespace std;

int main(){

    int n, m, k, empty = 0; 
    cin >> n >> m >> k;
    char chess[n][m];
    int ans[k];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            chess[i][j] = '#';

    for(int i = 0; i < k; i++){
        int x, y, cnt = 0; 
        cin >> x >> y;
        chess[x][y] = 'x';

        for(int u = x - 1; u <= x + 1; u++)
            for(int v = y - 1; v <= y + 1; v++)
                if(u >= 0 and u < n and v >= 0 and v < m)
                    if(chess[u][v] != '*' and chess[u][v] != 'x') chess[u][v] = '*', cnt++;
        
        ans[i] = cnt;
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(chess[i][j] != '*' and chess[i][j] != 'x') empty++;

    for(int i = 0; i < k; i++)
        cout << "Number of moves King #" << i + 1 << ": " << ans[i] << endl;

    cout << "Number of empty squares: " << empty << endl;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++)
    //         cout << chess[i][j];
    //     cout << endl;
    // }
}