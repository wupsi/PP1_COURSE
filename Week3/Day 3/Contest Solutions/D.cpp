#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
 
    for(int i = 0; i < s.size(); i++)
        cout << s.substr(0, i + 1) << endl;

}