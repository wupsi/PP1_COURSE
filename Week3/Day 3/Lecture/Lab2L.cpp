#include <iostream>
using namespace std;

int main(){

    int n, k = 1; cin >> n;

    for(int i = 1; k <= n; i++){
        cout << k << " ";
        k *= 2;
    }

    return 0;
}