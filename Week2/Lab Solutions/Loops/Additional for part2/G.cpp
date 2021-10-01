#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, x = -1; cin >> n;
    double sum = 1.0;
    
    for(int i = 1 ; i <= n ; i++) {
        sum += x / (2.0 * i + 1);
        x = -x;
    }
    cout << 4 * sum;
 
    return 0;
}
