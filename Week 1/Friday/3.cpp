#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 2; i <= n; i++){
        bool ok = false;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                ok = true;
                break;
            }
        }
        if(!ok) cout << i << " is prime" << endl;
    }
}