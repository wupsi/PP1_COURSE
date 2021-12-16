#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<vector<int>> v;

    for(int i = 0; i < n; i++){
        vector<int> v1;
        for(int j = 0; j < n; j++){
            int x; cin >> x;
            v1.push_back(x);
        }
        v.push_back(v1);
    }

    sort(v.begin(), v.end(), greater<vector<int> >());

    for(int i = 0; i < v.size(); i++){
        cout << i << " vector: ";
        sort(v[i].begin(), v[i].end());
        reverse(v[i].begin(), v[i].end());
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

// 3
// 1 2 3
// 8 5 3
// 1 7 9


// v: [[1, 2, 3], [8, 5, 3], [1, 7, 9]]

// v[0] = [1, 2, 3]
// v[2][1] = 7