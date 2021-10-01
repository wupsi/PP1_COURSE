#include <iostream>
using namespace std;

int main(){

    int n, mx = -999999; cin >> n;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(num > mx) mx = num;
    }

    cout << mx;
    return 0;
}

// 5
// 4 6 3 2 1