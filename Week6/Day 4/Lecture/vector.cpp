#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    v.pop_back();

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    if(v.empty()) cout << "\nempty";
    else cout << "\nnot empty";

    int pos = 1;
    int value = 15;
    v.insert(v.begin() + 2, value);

    cout << endl;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    v.erase(v.begin() + 1);

    cout << endl;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl << "Front: " << v.front(); // v[0]
    cout << endl << "Back: " << v.back();

    int num = v.front();


    cout << endl << num;

    return 0;
}

// vector
// set
// map
// iterator

// [3, 4, 5, 1, 64, 42, 43]

// arr:
// n = 5
// [1, 2, 3, 4, 5]

// vector:
// n = 5
// 1, 2, 3, 4, 5

// cin >> x; x = 1
// v: [1]
// cin >> x; x = 2
// v: [1, 2]
// cin >> x; x = 3
// v: [1, 2, 3]

// v.pop_back();
// v: [1, 2]

// v.insert(1, 15);

// v: [1, 15, 2]