#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(5);
    q.push(6);
    q.push(2);
    q.push(3);

    cout << "Queue size: " << q.size() << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

// back - конец
// front - начало
// pop - удалить начало
// push - добавить в конец
// size - возвращает размер
// empty - проверяет на пустоту
