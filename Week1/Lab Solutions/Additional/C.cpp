#include <iostream>
using namespace std;

int main(){
    
    int a, b; cin >> a >> b;

    if(a != 1 and b != 1) cout << "YES";
    else if(a == 1 and b == 1) cout << "YES";
    else cout << "NO";

    return 0;
}