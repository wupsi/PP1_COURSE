#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(num % 10 == 7) cnt++;
    }

    cout << cnt;

    return 0;
}