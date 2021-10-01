#include <iostream>
using namespace std;

int main(){

    int n, mx = -9999999, cnt = 0; cin >> n;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(mx < num) mx = num;
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}