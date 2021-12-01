#include<iostream>
#include<map>
using namespace std;

int main(){

    int n; cin >> n;
    multimap<int, string, greater<int> > mp;
    multimap<int, string> :: iterator it;

    for(int i = 0; i < n; i++){
        string name;
        int x;
        cin >> name >> x;
        mp.insert(make_pair(x, name));
    }

    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->second << " " << it->first << endl;
}
