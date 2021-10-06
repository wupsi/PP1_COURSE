#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0) cout << "*";
            else if(i == n - 1 or i + j == n - 1 or i == j) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}

// n = 10
// i = 0
// j++
// j = 0, cout << "*"; j = 1, cout << "*"; j = 2, cout << "*", ... j = 8, cout << "*"; j = 9, cout << "*";
// cout << endl;

// i = 1;
// j = 0, j = 1, j = 2, ... j = 8, j = 9;
// cout << endl;

// i = 8
// j = 0, j = 1, j = 2, ... j = 8, j = 9;
// cout << endl;

// i = 9
// j = 0, cout << "*"; j = 1, cout << "*"; j = 2, cout << "*", ... j = 8, cout << "*"; j = 9, cout << "*";
// cout << endl;

// end;

// **********
//  *      *
//   *    *
//    *  *
//     **
//     **
//    *  *
//   *    *
//  *      *
// **********