#include <iostream>
#include <stack>
using namespace std;

int main(){

    string s; cin >> s;
    stack<char> st, st1;
    int cnt = 1;

    for(int i = 0; i < s.size(); i++){
        if(i == 0) st.push(s[i]);
        else{
            if(st.top() + 1 == s[i]){
                cnt++;
                st.push(s[i]);
            }
            else{
                if(cnt == 0) st.push(s[i]);
                else{
                    int num = cnt;
                    char c = num + '0';
                    while(cnt--) st.pop();
                    st.push(c);
                    st.push(s[i]);
                    cnt = 1;
                }
            }
        }
        if(i == s.size() - 1){
            int num = ++cnt;
            char c = num + '0';
            while(cnt--) st.pop();
            st.push(c);
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        st1.push(st.top());
        st.pop();
    }

    while(!st1.empty()){
        cout << st1.top();
        st1.pop();
    }
}

// "abcrdefg" -> "3r4"

// 'a' + 1 == 'b'
// 'b' + 1 == 'c'
// 'c' + 1 == 'r'
// 'd' 
// 'r' + 1 == 'd'
// stack: ['3', 'r']
// cnt = 3
// num = 3
// c = '3'