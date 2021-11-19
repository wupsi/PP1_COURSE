#include <iostream>
using namespace std;

void space(string str, int i){
    if(i == str.size()) return;
    cout << str[i] << " ";
    space(str, ++i);
}

int main(){

    string s; cin >> s;

    space(s, 0);
}