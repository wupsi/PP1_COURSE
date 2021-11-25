#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n, x; cin >> n;
    vector<int> v;
    vector<int>::iterator it = v.begin();

    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        if(c == '+'){
            int pos, val; 
            cin >> pos >> val;
            v.insert(v.begin() + pos, val);
        }
        else{
            int pos; 
            cin >> pos;
            v.erase(v.begin() + pos);  
        }
    }

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}