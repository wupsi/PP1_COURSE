#include <iostream>
using namespace std;

int main(){

    string s, t, ans = ""; cin >> s >> t;

    for(int i = 0; i < t.size() / s.size(); i++)
        ans += s;

    cout << (ans == t ? "YES" : "NO");
 // cout << ((условие) ? вывод 1 : вывод 2);

    return 0;
}