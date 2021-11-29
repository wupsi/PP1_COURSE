#include <iostream>
#include <set>
using namespace std;

int main(){

    string s = "Hello World!";
    multiset<char> ms;
    multiset<char> :: iterator it;

    for(int i = 0; i < s.size(); i++)
        ms.insert(s[i]);

    for(it = ms.begin(); it != ms.end(); it++)
        cout << *it;

}