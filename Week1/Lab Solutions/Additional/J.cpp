#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int a, b, c, d; 
    cin >> a >> b >> c >> d;
    cout << (abs(a - c) <= 1 and abs(b - d) <= 1 ? "YES" : "NO");

    return 0;
}