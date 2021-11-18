#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int, string> mp;
    map<string, int> mp1;

    mp[5] = "Nurkhan";
    mp[1] = "Temirkhan";
    mp[3] = "Amina";
    mp[3] = "Yerkin";
    mp1["Nurkhan"] = 35;
    mp1["Temirkhan"] = 5;
    mp1["Amina"] = 100;
    mp1["Amina"] = 1000;
    mp1["Amins"] = 153;

    map<int, string> :: iterator it = mp.begin();
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    cout << endl;
    map<string, int> :: iterator it1;
    for(it1 = mp1.begin(); it1 != mp1.end(); it1++){
        cout << it1->first << " " << it1->second << endl;
    }

}