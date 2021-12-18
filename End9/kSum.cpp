#include <iostream>
using namespace std;

int correct(int i, int num, int cnt){
    if(i == num) return cnt;
    string newNum = to_string(i);
    bool ok = true;
    for(int j = 0; j < newNum.size() - 1; j++)
        if(newNum[j] == '0' and newNum[j + 1] == '0') ok = false;

    if(ok) cnt++;

    return correct(++i, num, cnt);
}

int main(){

    int n, num = 1; cin >> n;
    for(int i = 1; i < n; i++)
        num *= 10;

    cout << correct(num, num * 10, 0);
}