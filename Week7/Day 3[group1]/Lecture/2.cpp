#include <iostream>
using namespace std;

int main(){

    int n, max = -9999999; cin >> n;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(max < num) max = num;
    }

    cout << max;
    
    return 0;
}

// Input
// 4
// 1 1 2 1

// max = -9999999;

// i = 0, num = 1, if(max < num) -> -9999999 < 1, max = 1;
// i = 1, num = 1, if(max < num) -> 1 < 1, max;
// i = 2, num = 2, if(max < num) -> 1 < 2, max = 2;
// i = 3, num = 1, if(max < num) -> 2 < 1, max;
