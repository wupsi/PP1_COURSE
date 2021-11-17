#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s, sub; cin >> s >> sub;
    for(int i = 0; i < s.size() - sub.size() + 1; i++)
        if(sub == s.substr(i, sub.size())) cout << i << " ";
}

// Input:
// s = ababbababa
// sub = aba