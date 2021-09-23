#include <iostream>
using namespace std;

int main(){

    int a, b, c, mx, mn, average; 
    cin >> a >> b >> c;

    if(a == b and b == c) cout << 3;
    else if(a == b or b == c or a == c) cout << 2;
    else cout << 0;

    return 0;
}