#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
 
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 48 and s[i] <= 57){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}