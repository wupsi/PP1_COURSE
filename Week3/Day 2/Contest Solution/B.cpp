#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << (arr[0][0] == arr[n - 1][n - 1] ? "YES" : "NO");

    return 0;
}