#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int cap = 0, sm = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 and s[i] <= 90) cap++;
        else if(s[i] >= 'a' and s[i] <= 'z') sm++;
    }

    return 0;
}
// s[i] >= 'A'

// 65 <= s[i] <= 90 -> cap++;
// 97 <= s[i] <= 122 -> sm++;

// "AAbbbAAbcde"

// s[0] = 'A'(65) -> cap++;
// s[1] = 'A'(65) -> cap++;
// s[2] = 'b'(98) -> sm++;
// s[3] = 'b'(98) -> sm++;
// s[4] = 'b'(98) -> sm++;
