#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int x; cin >> x;
    int temp = x;

    for(int i = 1; i < n; i++){
        temp = x;
        cin >> x;
        if(x > temp) cout << x << " ";
    }
}