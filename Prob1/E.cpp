#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s, t; cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << (s == t ? "YES" : "NO");
}

// Терарный оператор:
// (условие ? вывод1 : вывод2);