#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string s, ans = ""; getline(cin, s);
    int arr[10000];
    int size = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' or i == s.size() - 1){
            if(i == s.size() - 1) ans += s[i];
            int num = 0, degree = 1;
            for(int j = ans.size() - 1; j >= 0; j--){
                num += (ans[j] - '0') * degree;
                degree *= 10;
            }
            arr[size] = num;
            size++;
            ans = "";
        }
        else ans += s[i];
    }
    int k; cin >> k;

    for(int i = 0; i < size; i++)

    return 0;
}

// 12345, sum = 0
// 5(53) - 48 * 1 = 5, sum = 5
// 4 * 10 = 40, sum = 45
// 3 * 100 = 300, sum = 345
// 2 * 1000 = 2000, sum = 2345
// 1 * 10000 = 10000, sum = 12345