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

    for(int i = 0; i < v.size(); i++)
        for(int j = i; j < v.size() - 1; j++)
            if(v[i] > v[j + 1]) swap(v[i], v[j + 1]);
           
    for(int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
}