#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s = "bac";

    // cout << s << endl;
    // while(next_permutation(s.begin(), s.end())){
    //     cout << s << endl;
    // }

    sort(s.begin(), s.end());

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

}   