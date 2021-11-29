#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    map<int, pair<string, string> > mp;
    map<int, pair<string, string> > :: iterator it;

    for(int i = 0; i < n; i++){
        int id; cin >> id;
        string name, surname; cin >> name >> surname;
        mp.insert(make_pair(id, make_pair(name, surname)));
    }

    cout << endl;
    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second.first << " " << it->second.second << endl;
}
