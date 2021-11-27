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
        cout << "Stack Top: " << st.top() << endl;
        st.pop();
    }
}

// pop - удаляет
// push - добавляет
// empty - проверяет на пустоту
// size - возвращает размер
// top - выводит последний элемент