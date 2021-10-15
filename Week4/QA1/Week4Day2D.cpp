#include <iostream>
using namespace std;

int len[10000];
string words[10000];

string Longer(string str){

    int cnt = 0, maxlen = 0, pos = 0;
    string ans = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' ' and i + 1 != str.size()) ans += str[i];

        else{
            if(i + 1 == str.size()) ans += str[str.size() - 1];

            words[cnt] = ans;
            len[cnt] = ans.size();

            if(ans.size() > maxlen){
                maxlen = ans.size();
                pos = cnt;
            }
            ans = "";
            cnt++;
        }
    }
    return words[pos];
}

int main(){

    string s; getline(cin, s);

    cout << Longer(s);

    return 0;
}