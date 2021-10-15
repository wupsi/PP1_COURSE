#include <iostream>
using namespace std;

int main(){

    string s = "Hello World!";

    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }

    return 0;
}

// s[0] = 'H'
// s[1] = 'e'
// s[2] = 'l'
// s[5] = ' '
// s[6] = 'W'
