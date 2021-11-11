#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s = "Hello World!";
    string sub = "...";

    for(int i = 0; i < s.size(); i++){
        int pos = s.find('l');
        if(pos != -1) s.replace(pos, 1, ",");
    }
    if(s.size() == 0) cout << "Pustoy";
    else cout << "est";

    cout << endl << s;

    string t = "Hello World!";

    for(int i = 0; i < t.size(); i++){
        for(int j = 0; j < t.size(); j++){
            if(t[j] < t[i]) swap(t[i], t[j]);
        }
    }

    cout << endl << t;


    return 0;
}

// 'Hello World...'

// getline(cin, str);
// 'a' -> 'A'; 'A' -> 'a'

// Заглавные
// Строчные
// Числа
// Размер

    // 5
    // 43 2 6 51 6
