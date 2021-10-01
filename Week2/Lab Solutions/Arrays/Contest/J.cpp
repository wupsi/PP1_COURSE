#include <iostream>
using namespace std;

int main(){
    int n, m, num, cnt = 0; cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num <= m) cnt++;
    }
    cout << cnt;
}