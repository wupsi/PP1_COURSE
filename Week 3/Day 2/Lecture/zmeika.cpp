#include <iostream>
using namespace std;

int main(){

    int n, k = 0; cin >> n;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                k++;
                cout << k << " ";
            }
            cout << endl;
        }
        else{
            for(int j = n * (i + 1); j > k; j--){
                cout << j << " ";
            }
            cout << endl;  
            k += n;
        }
    }

    return 0;
}

// Input:
// 5

// Output:
// i = 0: 1 2 3 4 5
// i = 1: 10 9 8 7 6
// i = 2: 11 12 13 14 15
// i = 3: 20 19 18 17 16
// i = 4: 21 22 23 24 25