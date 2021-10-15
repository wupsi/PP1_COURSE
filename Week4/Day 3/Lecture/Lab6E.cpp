#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float Hypotenuse(int a, int b){
    return sqrt(a * a + b * b);
}

int main(){

    int a, b; cin >> a >> b;

    cout << setprecision(4) << Hypotenuse(a, b);

    return 0;
}