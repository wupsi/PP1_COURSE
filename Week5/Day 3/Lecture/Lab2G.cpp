#include <iostream>
using namespace std;

int main(){

    int n, max = -99999999; cin >> n;

    for(int i = 1; i <= n; i++){
        int num; cin >> num;
        if(max < num) max = num;
    }
    cout << max;

    return 0;
}

// 4
// 1 1 2 1