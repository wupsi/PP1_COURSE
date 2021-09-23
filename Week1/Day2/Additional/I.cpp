#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int a, b, c, d; 
    cin >> a >> b >> c >> d;
    cout << (abs(a - c) == abs(b - d) or  a == c or b == d ? "YES" : "NO");

    return 0;
}