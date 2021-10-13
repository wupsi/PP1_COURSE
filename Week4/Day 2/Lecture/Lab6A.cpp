#include <iostream>
using namespace std;

void Sum(int a, int b){
    cout << a + b;   
}

int main(){

    int a, b; cin >> a >> b;

    Sum(a, b);

    return 0;
}