#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n - 1; j++){
            // cout << "arr[" << i << ", " << j << "] ";
            if(i >= j) cout << "[*]";
        }
        cout << endl;
    }

    return 0;
}
