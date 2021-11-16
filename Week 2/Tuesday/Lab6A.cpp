#include <iostream>
#include <cmath>
using namespace std;

int Sum(int a, int b){
    return a + b;
}

void Sum1(int a, int b){
    cout << a + b;
}

int main(){

    int a, b; cin >> a >> b;
    
    Sum1(a, b);

}