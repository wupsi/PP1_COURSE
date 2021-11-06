#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int even = 0, odd = 0;

    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0) even += s[i] - '0';
        else odd += s[i] - '0';
    }

    cout << (even == odd ? "YES" : "NO");
    // cout << (условие ? первое : второе);
    // если условие верное, выведу первое, иначе второе

    return 0;
}

// s = '123'
// s[0] = '1'
// s[1] = '2'
// s[2] = '3'
// even = 0, odd = 0;

// s[0] - '0': '2' - '0', 49 - 48 = 1, even = 1;
// s[1] - '0': '2' - '0', 50 - 48 = 2, odd = 2;
// s[2] - '0': '2' - '0', 51 - 48 = 3, even = 4;
