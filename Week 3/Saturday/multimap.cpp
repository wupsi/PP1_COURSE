#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    multimap<int, int> mp;
    multimap<int, int> :: iterator it;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        bool find = false;
        for(it = mp.begin(); it != mp.end(); it++){
            if(x == it->first){
                find = true;
                if(it->second < y) mp.insert(make_pair(x, y));
                break;
            }
        }
        if(find == false) mp.insert(make_pair(x, y));
    }

    cout << "mp:" << endl;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}

// 7
// 5 5
// 5 10
// 4 12
// 3 7
// 4 5
// 8 11
// 6 5