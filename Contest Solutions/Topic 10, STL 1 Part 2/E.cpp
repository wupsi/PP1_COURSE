#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int x;
    while(cin >> x) v.push_back(x);
    for(int i = v.size() - 1; v[i] != 0; i--) cout << v[i] << " ";
}