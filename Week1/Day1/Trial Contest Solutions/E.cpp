#include <iostream>  
using namespace std;  
int main(){  
    
    int n, x, num; cin >> n >> x;    
    
    for(int i = 0; i < n; i++){    
        cin >> num;
        if(num % x == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;    
}  