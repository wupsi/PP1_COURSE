#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i <= n; i++){
        int num = i, cnt = 0;
        while(num){
            if(num % 2 == 1) cnt++;
            num /= 2;
        }
        cout << cnt;
        cout << (i != n ? "," : "");
    }

    return 0;
}