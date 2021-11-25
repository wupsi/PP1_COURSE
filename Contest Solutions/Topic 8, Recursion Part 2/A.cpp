#include <iostream>
using namespace std;

void Boss(string str, int i){
    if('A' <= str[i] and str[i] <= 'Z'){
        cout << str[i] << " " << i;
        return;
    }
    if(i == str.size()){
        cout << "CHAOS!";
        return;
    }
    Boss(str, ++i);
}

int main(){

    string s; cin >> s;
    Boss(s, 0);

    return 0;
}