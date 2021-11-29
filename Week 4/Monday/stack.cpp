#include <iostream>
#include <stack>
using namespace std;

int main(){

    int n; cin >> n;
    stack<int> st;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
}

// push
// top
// pop
// empty
// size