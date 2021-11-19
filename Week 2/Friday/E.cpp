#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    set<int> st, st1;
    vector<int> v;
    map<int, bool> mp;

    while(true){
        int x; cin >> x;
        if(x == 0) break;
        st.insert(x);
    }
    while(true){
        int x; cin >> x;
        if(x == 0) break;
        st1.insert(x);
    }

    set<int> :: iterator it, it1;

    for(it = st.begin(); it != st.end(); it++)
        for(it1 = st1.begin(); it1 != st1.end(); it1++)
            if(*it == *it1){
                v.push_back(*it);
                break;
            }
    
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    for(it1 = st1.begin(); it1 != st1.end(); it1++) st.insert(*it1);
    
    for(it = st.begin(); it != st.end(); it++) mp[*it] = true;

    cout << endl;
    for(int i = 1; i <= n; i++)
        if(!mp[i]) cout << i << " ";
}
