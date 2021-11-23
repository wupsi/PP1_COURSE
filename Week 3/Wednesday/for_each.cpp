#include <iostream>     
#include <algorithm>    
#include <map>       
using namespace std;

int main(){

    map<string, int> mp;

    mp["Nurhan"] = 30;
    mp["Nurgalym"] = 35;
    mp["Leila"] = 25;

    for(auto i : mp) cout << i.first << " " << i.second << endl;

    return 0;
}
