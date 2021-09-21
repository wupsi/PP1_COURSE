#include <iostream>
using namespace std;

int main(){
    int n, h, num, cnt = 0; cin >> n >> h;
    
    
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num <= h) cnt++;
    }

    cout << cnt;
}