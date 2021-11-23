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
    
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
}
// 1. sort(), reverse()
// 2. generate()
// 3. next_permutation()
// 4. fill()
// 5. count()
// 6. unique()
// 7. rotate()
// 8. for_each()

// Input:
// 5
// 3 2 4 6 1
// [3 2 4 6 1]

// Output:
// 1 2 3 4 6
// [6, 4, 3, 2, 1]