#include <iostream>
using namespace std;

int main(){
    int n, num, cnt = 0; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num > 0) cnt++;
    }
    cout << cnt;
}