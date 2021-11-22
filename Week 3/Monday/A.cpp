#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

    map<int, int> mp;
    map<int, vector<int>, greater<int> > mp1;
    map<int, int> :: iterator it;
    map<int, vector<int> > :: iterator it1;

    int x;
    while(cin >> x) mp[x]++;

    for(it = mp.begin(); it != mp.end(); it++)
        mp1[it->second].push_back(it->first);

    for(it1 = mp1.begin(); it1 != mp1.end(); it1++)
        for(int i = 0; i < it1->second.size(); i++)
            cout << it1->second[i] << " : " << it1->first << endl;
}   

// 1
// 2
// 3
// 3
// 4
// 3 1 1 1 3 2 4
// 9999
// 1111

// 1[1]
// 2[1]
// 3[1]
// 3[2]
// 4[1]
// 3[3]
// 1[4]
// 3[4]
// 2[2]
// 4[2]
// 9999[1]
// 1111[1]


// 1 4
// 2 2
// 3 4
// 4 2
// 1111 1
// 9999 1

// 4[1, 3]
// 2[2, 4]
// 1[1111, 9999]