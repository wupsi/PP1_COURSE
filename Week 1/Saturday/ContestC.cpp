#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    bool con1 = false, con2 = false, con3 = false;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z') con1 = true;
        if(s[i] >= 'a' and s[i] <= 'z') con2 = true;
        if(s[i] >= '0' and s[i] <= '9') con3 = true;
    }

    cout << (con1 and con2 and con3 and s.size() >= 7 ? "Acceptable" : "Not acceptable");

    return 0;
}
// 1. Пароль содержит заглавные буквы 
// 2. Пароль содержит строчные буквы 
// 3. Пароль содержит цифры 
// 4. Длина пароля не менее 7 символов