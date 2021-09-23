#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b, c, d, e, mx, mn, average; 
    cin >> a >> b >> c;

    mx = max(c, max(a, b));
    mn = min(c, min(a, b));
    average = a + b + c - mx - mn;

    d = mn * mn + average * average;
    e = mx * mx;

    if (mn + average <= mx) cout << "impossible";
    else{
        if(d > e) cout << "acute";
        else if(d < e) cout << "obtuse";
        else cout << "right";
    }
    
    return 0;
}