#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n; cin >> n;
    cout << (ceil(sqrt(n)) * ceil(sqrt(n)) == n ? "Yes" : "No");
}