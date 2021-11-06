#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int cap = 0, sm = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z') cap++;
        else if(s[i] >= 97 and s[i] <= 122) sm++;
    }

    cout << sm << " " << cap;

    return 0;
}

// s.empty()
// s.erase()
// s.find()
// s.size()
// s.substr()

// Hello
