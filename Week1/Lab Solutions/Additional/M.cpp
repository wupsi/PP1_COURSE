#include <iostream>
using namespace std;

int main(){

    int k; cin >> k;
    cout << ((k % 4 == 0 and k != 0) or k == 1 ? "YES" : "NO");

    return 0;
}