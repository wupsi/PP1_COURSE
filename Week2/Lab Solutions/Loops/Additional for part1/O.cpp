#include <iostream>
using namespace std;

int main(){

    int n, num; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}