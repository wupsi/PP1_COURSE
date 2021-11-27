#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n; cin >> n;
    map<string, int> mp;
    map<string, int> :: iterator it;

    map<int, vector<string> > mp1;
    map<int, vector<string> > :: iterator it1;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        string s; cin >> s;
        mp[s] = x;
    }

    cout << "mp:" << endl;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
        mp1[it->second].push_back(it->first);
    }

    cout << "mp1:" << endl;
    for(it1 = mp1.begin(); it1 != mp1.end(); it1++){
        cout << it1->first << ": ";
        for(int i = 0; i < it1->second.size(); i++){
            cout << it1->second[i] << " ";
        }
        cout << endl;
    }
}

// 1. map
// 2. multimap
// 3. multiset
// 4. pair
// 5. iterators
// 6. stack
// 7. queue
// 8. deque

// 3: ["Karina", "Zarina", "Yerkin"]
// 4: ["Nazerke"]
// 5: ["Zhandos"]
// 7: ["Zhanel"]
// 9: ["Alfarabi"]

// Input:
// 7
// 5 5
// 5 10
// 4 12
// 3 7
// 4 5
// 8 11
// 6 5

// Output:
// 8 5
// 6 5
// 5 5
// 5 7
// 4 8
// 4 10
// 3 12

