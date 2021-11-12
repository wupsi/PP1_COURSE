#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << (i + j == n - 1 or i == n - 1 or j == n - 1 ? "1 " : "0 ");
        cout << endl;
    }

}

// Input:
// 5

// Output:
// 0 0 0 0 1
// 0 0 0 1 1
// 0 0 1 0 1
// 0 1 0 0 1
// 1 1 1 1 1

// i = 0 // 0 0 0 0 1
// j = 0, j = 1, j = 2, j = 3, j = 4

// i = 1 // 0 0 0 1 1
// j = 0, j = 1, j = 2, j = 3, j = 4

// i = 2 // 0 0 1 0 1
// j = 0, j = 1, j = 2, j = 3, j = 4

// i = 3 // 0 1 0 0 1
// j = 0, j = 1, j = 2, j = 3, j = 4

// i = 4 // 1 1 1 1 1
// j = 0, j = 1, j = 2, j = 3, j = 4
