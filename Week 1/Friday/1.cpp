#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // cout << "[" << i << ", " << j << "] ";
            if(i + j == n - 1) cout << i + 1;
            else cout << '.';
        }
        cout << endl;
    }

    return 0;
}

// n = 4
// n - 1 = 3

// i + j == n - 1

// [0, 3]
// [1, 2]
// [2, 1]
// [3, 0]

// n - 1 = 3
// [0, 0] sum = 0 
// [0, 1] sum = 1
// [0, 2] sum = 2
// [0, 3] sum = 3