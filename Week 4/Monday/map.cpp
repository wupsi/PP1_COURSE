#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){

    // map<char, int> mp;
    // map<char, int> :: iterator it;

    // mp['a'] = 3;
    // mp['}'] = 100;
    // mp['F'] = 6;
    // mp['Z'] = 500;
    // mp['}'] = 5;

    // for(it = mp.begin(); it != mp.end(); it++)
    //     cout << it -> first << " " << it -> second << endl;


    int n; cin >> n;
    map<int, vector<string> > mp1;
    map<int, vector<string> > :: iterator it1;

    for(int i = 0; i < n; i++){
        int x; string s;
        cin >> x >> s;
        mp1[x].push_back(s);
    }

    cout << endl;
    // вывод мэпа, когда значением является вектор
    for(it1 = mp1.begin(); it1 != mp1.end(); it1++){
        cout << it1 -> first << ": [ ";
        for(int i = 0; i < it1 -> second.size(); i++)
            cout << it1 -> second[i] << " ";
        cout << "]\n";
    }

    // map.count(x); - проверяет, сколько раз встретилось x в ключах мэпа
    for(int i = 0; i < 10; i++){
        cout << i << ": " << mp1.count(i) << endl;
    }

    // map.empty() - проверяет map на пустоту
    cout << (mp1.empty() ? "Map is empty;\n" : "Map is not empty;\n");

    // map.find(x)

    map<int, vector<string> > :: iterator it_find = mp1.find(3);
    cout << it_find -> first << endl;
    for(int i = 0; i < it_find -> second.size(); i++)
        cout << it_find -> second[i] << " ";
}

// 1. map
// 2. iterators
// 3. multimap
// 4. multiset
// 5. pair
// 6. stack
// 7. queue
// 8. deque

// "Nurken" + "Nurtay" = "NurkenNurtay"
// mp[3] = "NurkenNurtay"

// 1: ["Nurken", "Nurtay"]
