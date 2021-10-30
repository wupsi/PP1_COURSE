#include <iostream>
using namespace std;

int main(){

    string s, ans = ""; getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' or i == s.size() - 1){
            if(i == s.size() - 1) ans += s[i];
            if(ans.size() > 3) cout << ans << " ";
            ans = "";
        } 
        else ans += s[i];
    }

    return 0;
}

// My name is Nurtay
// s.size() == 17
// s.size() - 1 == 16

// s[0] = 'M'
// s[1] = 'y'
// s[2] = ' '
// s[3] = 'n'
// s[4] = 'a'
// s[5] = 'm'
// s[6] = 'e'
// s[7] = ' '
// s[8] = 'i'
// s[9] = 's'
// s[10] = ' '
// s[11] = 'N'
// s[12] = 'u'
// s[13] = 'r'
// s[14] = 't'
// s[15] = 'a'
// s[16] = 'y'
