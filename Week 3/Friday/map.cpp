#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int, int> mp;
    map<int, int> :: iterator it;
    mp[5] = 10;
    mp[7] = 3;
    mp[2] = 5;
    mp[5] = 6;

    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << endl;

    map<string, int> mp1;
    map<string, int> :: iterator it1;
    mp1["Nurkhan"] = 5;
    mp1["Nazerke"] = 3;
    mp1["Nazerke"] += 5;

    for(it1 = mp1.begin(); it1 != mp1.end(); it1++)
        cout << it1->first << " " << it1->second << endl;
}
