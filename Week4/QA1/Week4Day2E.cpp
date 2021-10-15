#include <iostream>
using namespace std;

int main(){

    int n, m; cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((i == 0 and j == 0) or (i == 0 and j == m - 1) 
            or (i == n - 1 and j == 0) or (i == n - 1 and j == m - 1)) cout << "+";
            else if(i == 0 or i == n - 1) cout << "-";
            else if(j == 0 or j == m - 1) cout << "|";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}