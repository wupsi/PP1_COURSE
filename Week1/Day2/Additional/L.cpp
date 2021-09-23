#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int n, m, k; 
    cin >> n >> m >> k;

    cout << ((k < n * m and ((k % n == 0)) or (k % m == 0)) ? "YES" : "NO");

    return 0;
}