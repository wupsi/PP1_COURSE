#include <iostream>
#include <set>
using namespace std;

int main(){

    string s; cin >> s;
    string longest = "";

    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            string sub = s.substr(i, j + 1 - i);
            set<char> st;

            for(int k = 0; k < sub.size(); k++)
                st.insert(sub[k]);
            
            if(longest.size() < sub.size() and sub.size() == st.size()) longest = sub;
        }
    }
    cout << longest.size();
}