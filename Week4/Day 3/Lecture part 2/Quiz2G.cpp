#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int arr[256];

    for(int i = 0; i < s.size(); i++){
        if(arr[s[i]] == 1) cout << s[i];
        arr[s[i]] = 1;
    }
}

// s = abcdabd;

// i = 0, s[i] = 'a' = 97, arr[97] = 54634343, arr[97] = 1

// i = 1, s[i] = 'b' = 98, arr[98] = 64526547, arr[98] = 1

// i = 2, s[i] = 'c' = 99, arr[99] = 65465547, arr[99] = 1

// i = 3, s[i] = 'd' = 100, arr[100] = 76587547, arr[100] = 1

// i = 4, s[i] = 'a' = 97, arr[97] = 1, cout << s[i];

// i = 5, s[i] = 'b' = 98, arr[98] = 1, cout << s[i];

// i = 6, s[i] = 'd' = 100, arr[100] = 1, cout << s[i];