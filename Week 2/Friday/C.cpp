#include <iostream>
using namespace std;

void FirstUpper(string str, int i){

    if(i == str.size()){
        cout << -1;
        return;
    }

    if(str[i] >= 'A' and str[i] <= 'Z'){
        cout << str[i];
        return;
    }

    FirstUpper(str, ++i);
}

int main(){

    string s; cin >> s;

    FirstUpper(s, 0);
}