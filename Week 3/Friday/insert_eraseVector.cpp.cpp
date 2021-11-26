#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    cout << "vector:\n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    for(int i = 0; i < 3; i++){
        v.insert(v.begin() + i, i);
    }    

    cout << "\nvector after insert():\n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    v.erase(v.begin(), v.begin() + 3);

    cout << "\nvector after erase():\n";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

// v.insert(v.begin(), i)
// v: [3, 4, 8, 2, 7]

// i = 0
// v: [0, 3, 4, 8, 2, 7]

// i = 1
// v: [1, 0, 3, 4, 8, 2, 7]

// i = 2
// v: [2, 1, 0, 3, 4, 8, 2, 7]


// v.insert(v.begin() + i, i)
// v: [3, 4, 8, 2, 7]

// i = 0
// v: [0, 3, 4, 8, 2, 7]

// i = 1
// v: [0, 1, 3, 4, 8, 2, 7]

// i = 2
// v: [0, 1, 2, 3, 4, 8, 2, 7]


// v: [0, 1, 2, 3, 4, 8, 2, 7]

// erase range: [v.begin(), v.begin() + 3)