#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int a, b, c, d; 
    cin >> a >> b >> c >> d;
    int dx = abs(a - c), dy = abs(b - d);

    cout << ((dx == 1 and dy == 2) or (dx == 2 and dy == 1) ? "YES" : "NO");

    return 0;
}