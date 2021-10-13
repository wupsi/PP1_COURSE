#include <iostream>
using namespace std;

int print(int n){

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        cout << num << " ";
    }
}

int main(){

    int n; cin >> n;

    print(n);

    return 0;
}

// 5
// 1 2 3 4 5

