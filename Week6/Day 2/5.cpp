#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 1; i * i <= n; i++){
        cout << i * i << endl;
    }

    return 0;
}
// i = 1; i * i = 1;
// i = 2; i * i = 4;
// i = 3; i * i = 9;