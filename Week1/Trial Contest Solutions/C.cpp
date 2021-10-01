#include <iostream>
using namespace std;

int main(){
    int h, a, b, day;
    cin >> h >> a >> b;
    day = ( h - 2 * b + a - 1) / (a - b);
    cout << day;
}