#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(5);
    dq.push_front(4);
    dq.push_back(10);
    dq.push_front(7);
    
    cout << "Deque size: " << dq.size() << endl;

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