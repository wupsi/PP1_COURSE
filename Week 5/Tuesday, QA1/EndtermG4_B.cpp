#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<pair<int, string> > v;

    for(int i = 0; i < n; i++){
        string name, surname; cin >> name >> surname;
        int points; cin >> points;
        string fullname = name + " " + surname;
        v.push_back(make_pair(points, fullname));
        }

    int x; cin >> x;

    for(int i = 0; i < n; i++){
        if(v[i].first >= x) cout << v[i].second << " pass the endterm.\n";
        else{
            int lacks = x - v[i].first;
            if(lacks == 1) cout << v[i].second << " didn't pass the endterm. He lacks 1 point.\n";
            else cout << v[i].second << " didn't pass the endterm. He lacks " << lacks << " points.\n";
        }
    }
}

// Nurkhan Tashimov
// name = "Nurkhan"
// surname = "Tashimov"
// fullname = name + " " + surname = "Nurkhan Tashimov"
