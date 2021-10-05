// Minimum numbers

#include <iostream>
using namespace std;

int main(){

    int n, k = 0; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n * 2 - 1; j++){
            // cout << "[" << i << ", " << j << "]" << " ";
            if(i + j >= n - 1 and k + n - 1 >= i + j) cout << "*";
            else cout << ".";
        }
        k += 2;
        cout << endl;
    }

    return 0;
}
