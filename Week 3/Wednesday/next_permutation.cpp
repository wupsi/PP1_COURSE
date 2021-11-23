#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s = "bcade";
    sort(s.begin(), s.end());

    do cout << s << endl;
    while(next_permutation(s.begin(), s.end()));
}

// abc
// acb
// bac
// bca
// cab
// cba