#include <iostream>
#include <stack>
using namespace std;

int main(){

    string s; cin >> s;
    stack<char> st;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') st.push(s[i]);
        else if(!st.empty())
            if(st.top() == '(') st.pop();
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << (st.empty() ? "YES" : "NO");
}