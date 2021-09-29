#include <iostream>
using namespace std;

int main(){

    int n, prod = 1; cin >> n;

    for(int i = 1; i <= n; i++)
        prod *= i;

    cout << prod;

    return 0;
}
