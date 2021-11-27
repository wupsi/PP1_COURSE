#include <iostream>
#include <set>
using namespace std;

int main(){

    int n; cin >> n;
    multiset<int> ms;
    multiset<int> :: iterator it;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ms.insert(x);
    }

    for(it = ms.begin(); it != ms.end(); it++)
        cout << *it << " ";
}