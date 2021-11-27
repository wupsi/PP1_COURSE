#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(6);
    dq.push_front(2);
    dq.push_back(7);
    dq.push_front(5);

    while(!dq.empty()){
        cout << dq.front() << endl;
        dq.pop_front();
    }
}

// back - конец
// front - начало 
// pop_back - удалить конец
// pop_front - удалить начало
// push_back - добавить в конец
// push_front - добавить в начало
// size - возвращает размер
// empty - проверяет на пустоту
