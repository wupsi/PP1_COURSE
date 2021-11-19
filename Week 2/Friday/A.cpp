#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int x;
    bool ok = true;
    vector<int> v;

    while(cin >> x){
        if(x == 0) ok = false;
        if(ok) v.push_back(x);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}