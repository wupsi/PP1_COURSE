#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> v;
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << "Sorted vector:\n";
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";

    reverse(v.begin(), v.end());

    cout << endl << "Sorted and reversed vector:\n";
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";

}


// 1. sort()
// 2. reverse()
// 3. generate()
// 4. next_permutation()
// 5. fill()
// 6. for_each()
// 7. rotate()
// 8. count()
// 9. unique()