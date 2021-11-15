#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s; cin >> s;
    int i = 0;
    sort(s.begin(), s.end());

    cout << "DO:\n";
// do сначала вывел и после использовал next_permutation()
    do{
        i++;
        cout << i << ": " << s << endl;
    }while(next_permutation(s.begin(), s.end()));

    i = 0;
    cout << "while:\n";
// while сначала использовал next_permutation(), и затем вывел строку
    while(next_permutation(s.begin(), s.end())){
        i++;
        cout << i << ": " << s << endl;
    }
    cout << "for:\n";
// также как while
    for(int i = 1; next_permutation(s.begin(), s.end()); i++){
        cout << i << ": " << s << endl;
    }
}
