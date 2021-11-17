#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;

    for(int i = 1; i <= s.size(); i++)
        cout << s.substr(s.size() - i, i) << endl;

    return 0;
}