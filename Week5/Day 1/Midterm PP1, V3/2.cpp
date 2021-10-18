// Дано число n
// n = 4(четное)
// #...
// ##..
// ###.
// ####

// n = 5(нечетное)
// ....#
// ...##
// ..###
// .####
// #####

#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(n % 2 == 1){
                if(i + j >= n - 1) cout << "#";
                else cout << ".";
            }
            else{
                if(i < j) cout << ".";
                else cout << "#";
            }
        }
        cout << endl;
    }
}