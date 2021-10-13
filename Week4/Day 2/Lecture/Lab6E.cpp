#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double Hypotenuse(int a, int b){
    return sqrt(a * a + b * b);
}

int main(){

    int a, b; cin >> a >> b;

    cout << setprecision(4) << Hypotenuse(a, b);

    return 0;
}