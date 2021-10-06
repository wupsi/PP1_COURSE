#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int k = n * n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << k << " ";
            k -= n;
        }
        k = n * n - i - 1;
        cout << endl;
    }
}