#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int sum = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' and s[i] <= '9'){
            string t = "";
            for(int j = i; j < s.size(); j++){
                if(!(s[j] >= '0' and s[j] <= '9')){
                    i = j;
                    break;
                }
                t += s[j];
            }
            int num = 0, degree = 1;
            for(int j = t.size() - 1; j >= 0; j--){
                num = num + (t[j] - '0') * degree;
                degree *= 10;
            }
            sum += num;
        }
    }
    cout << sum;

    return 0;
}