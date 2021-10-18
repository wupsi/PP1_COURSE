// Если в слове больше трех букв, выведите это слово

#include <iostream>
using namespace std;

int main(){

    string s, ans = ""; getline(cin, s);
    int cnt = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' or i  == s.size() - 1){
            if(i == s.size() - 1){
                ans += s[s.size() - 1];
                cnt++;
            }
            // cout << ans << " " << cnt <<  endl;
            if(cnt > 3) cout << ans << " ";
            ans = "";
            cnt = 0;
        }
        else{
            cnt++;
            ans += s[i];
        }
    }

}

// My name is Nurtay