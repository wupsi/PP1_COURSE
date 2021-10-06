#include <iostream>
using namespace std;

int main(){

    int n, m, x; cin >> n >> m >> x;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int num; cin >> num;
            if(num == x){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}