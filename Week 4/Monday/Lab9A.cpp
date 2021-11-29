// Первый пример

// #include <iostream>
// #include <map>
// using namespace std;

// int main(){

//     int n; cin >> n;
//     multimap<int, int> mp;
//     multimap<int, int> mp1;
//     multimap<int, int> :: iterator it, it1;

//     for(int i = 0; i < n; i++){
//         int x, y; cin >> x >> y;
//         mp.insert(make_pair(y, x));
//     }

//     cout << "mp:\n";
//     for(it = mp.begin(); it != mp.end(); it++){
//         mp1.insert(make_pair(it->second, it->first));
//         cout << it->first << " " << it->second << endl;
//     }
//     cout << "mp1:\n";
//     for(it1 = mp1.begin(); it1 != mp1.end(); it1++)
//         cout << it1->first << " " << it1->second << endl;
// }


// Второй пример
#include <iostream>
#include <set>
using namespace std;

int main(){
    int n; cin >> n;
    multiset<pair<int, int>> mp;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        mp.insert(make_pair(x, y));
    }

    for(multiset<pair<int, int>> :: iterator it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}