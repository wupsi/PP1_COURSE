#include <iostream>
using namespace std;

int main(){

    int n, m, cnt = 0; cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int num; cin >> num;
            if(num < 0) cnt++;
        }
    }

    cout << cnt;

    return 0;
}