#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int x = 0;

string gens(){
    string bin = "";
    int num = ++x;
    while(num){
        bin += num % 2 + '0';
        num /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main(){

    int n; cin >> n;
    vector<string> v(n);

    generate(v.begin(), v.end(), gens);

    for(int i = 0; i < v.size(); i++)
        cout << i + 1 << " in binary: " << v[i] << endl;
}
