#include <iostream>
using namespace std;

int main(){

    string s = "134445";
    int num = 0, degree = 1;

    for(int i = s.size() - 1; i >= 0; i--){
        num += (s[i] - '0') * degree;
        degree *= 10;
    }

    cout << num;

    return 0;
}

// "134445"

// num += '5' - '0' = 5 * 1 = 5;
// num += '4' - '0' = 4 * 10 = 40 + 5 = 45;
// num += '4' - '0' = 4 * 100 = 400 + 45 = 445;
// num += '4' - '0' = 4 * 1000 = 4000 + 445 = 4445;
// num += '3' - '0' = 3 * 10000 = 30000 + 4445 = 34445;
// num += '1' - '0' = 1 * 100000 = 100000 + 34445 = 134445;