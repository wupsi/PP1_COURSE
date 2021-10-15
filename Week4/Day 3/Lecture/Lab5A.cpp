#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int cntA = 0, cnta = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z') cntA++;
    }
    cout << s.size() - cntA << " " << cntA;

    return 0;
}