#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(9);
    q.push(4);
    q.push(5);
    q.push(3);
    q.pop();

    cout << "Queue front: " << q.front() << endl;
    cout << "Queue back: " << q.back() << endl;
    cout << "Queue size: " << q.size() << endl;
    cout << "Queue elements: ";

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();        
    }
}

// back
// front
// empty
// pop
// push
// size