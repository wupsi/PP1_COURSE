#include <iostream>
using namespace std;

int main(){
    int n, k = 0; cin >> n;
    int arr[n * 2 - 1][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n * 2 - 1; j++){
            if(i + j >= k and i + j < n * 2 - 1) cout << "*";
            else cout << ".";
        }
        k += 2;
        cout << endl;
    }
}

// ***********
// .*********.
// ..*******..
// ...*****...
// ....***....
// .....*.....

