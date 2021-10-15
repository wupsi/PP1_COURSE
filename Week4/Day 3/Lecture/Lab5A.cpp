#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int cntA = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z') cntA++;
    }

    cout << cntA << " " << s.size() - cntA;

    return 0;
}
    