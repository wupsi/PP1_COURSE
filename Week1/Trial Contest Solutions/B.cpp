#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n; cin >> n;
    int num = n, digits = 0;

    while(num){
        num /= 10;
        digits++;
    }

    for(int i = 0; digits > 0; i++){
        int power = pow(10, digits - 1);
        // cout << n / power << " " << n << " " << n % 10 << endl;
        
        if(n % 10 != n / power){
            cout << 0;
            return 0;
        }

        n = n % power;
        n /= 10;
        digits -= 2;
    }
    
    cout << 1;
    return 0;
}