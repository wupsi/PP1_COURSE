#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0) cout << j;
            else if(i == n - 1) cout << n + j - 1;
            else if(j == 0 and 0 < i < n - 1) cout << i;
            else if(j == n - 1 and 0 < i < n - 1) cout << n + i - 1;
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}