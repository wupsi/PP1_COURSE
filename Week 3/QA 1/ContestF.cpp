// Minimum numbers

#include <iostream>
using namespace std;

int main(){

    int n, k = 0; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j >= n - 1) cout << "[*]";
            else cout << "   ";
        }
        cout << endl;
    }

    return 0;
}
