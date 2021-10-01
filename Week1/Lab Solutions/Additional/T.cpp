#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b, c, mx, mn, average; 
    cin >> a >> b >> c;

    mx = max(c, max(a, b));
    mn = min(c, min(a, b));
    average = a + b + c - mx - mn;

    cout << (mn + average <= mx ? "NO" : "YES");

    return 0;
}