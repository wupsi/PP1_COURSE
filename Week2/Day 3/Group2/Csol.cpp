#include<iostream>
using namespace std;

int main(){
    
    int n, max = -99999999, min = 9999999; cin >> n;
    
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(num > max) max = num;
        if(num < min) min = num;
    }

    cout << max - min;

    return 0;
}
