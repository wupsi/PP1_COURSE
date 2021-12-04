#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    cout << "v: ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    sort(v.begin(), v.end());
    cout << "\nv after sort(): ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    reverse(v.begin(), v.begin() + 4);
    cout << "\nv after reverse[v.begin(), v.begin() + 4]: ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

}

// 1. sort(), reverse()
// 2. generate()
// 3. count()
// 4. fill()
// 5. next_permutation()
// 6. unique()
// 7. rotate()

// 5
// [6 4 7] 12 1
// v.begin(), v.begin() + 3

// v: [1 4 6 7] 12
// reverse(v.begin(). v.begin() + 4)
// v: 7 6 4 1 12