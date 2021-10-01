#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b; cin >> a >> b;

    for(int i = a; i <= b; i++)
        if(ceil(sqrt(i)) * ceil(sqrt(i)) == i) cout << i << " ";

    return 0;
}