#include <iostream>
#include <stack>
using namespace std;

int main(){

    string brackets; cin >> brackets;
    stack<char> st;

    for(int i = 0; i < brackets.size(); i++){
        if(brackets[i] == '(') st.push('(');
        else{
            if(st.top() == '(') st.pop();
            else{
                cout << "NO";
                return 0;
            }
        }
    }

    cout << (st.empty() ? "YES" : "NO");
}