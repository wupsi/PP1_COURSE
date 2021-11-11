#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++)
        cout << (s[i] >= 97 and s[i] <= 122 ? char(s[i] - ' ') : s[i]);

    return 0;
}

// Input:
// abdfddSS

// s[0] = 'a' - 32 = 97 - 32 = 65('A')
// s[1] = 'b' - 32 = 98 - 32 = 66('B')

// cout << (условие ? вывод1 : вывод2);

// 97 <= s[i] <= 122

// char(s[i] - 32) - перевод с маленького на заглавный
// s[i] = 'g' -> char(s[i] - 32) -> 103 - 32 = 71, s[i] = char(71) -> s[i] = 'G'