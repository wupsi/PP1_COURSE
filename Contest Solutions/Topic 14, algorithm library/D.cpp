#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    for(int i = 0; i < n; i++){
        if(i % 2 == 0) sort(arr[i], arr[i] + m);
        else sort(arr[i], arr[i] + m, greater<int>());
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}