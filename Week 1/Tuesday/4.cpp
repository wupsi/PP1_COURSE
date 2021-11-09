#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, bros, posx = 0, posy = 0;
    cin >> n >> m;
    int max = -9999999;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> bros;
            if(max < bros){
                max = bros;
                posx = i;
                posy = j;
            }
        }
    }

    cout<< max << endl << posx << " " << posy;

}