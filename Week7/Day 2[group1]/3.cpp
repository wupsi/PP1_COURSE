#include <iostream>
using namespace std;

int main(){

    int n, m, maxsum = 0, pos = 0; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        if(maxsum < sum){
            maxsum = sum;
            pos = i;
        }
    }

    cout << maxsum << endl << pos;

    return 0;
}
