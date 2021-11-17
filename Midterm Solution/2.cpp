#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, a, b; cin >> n >> a >> b;
    string first = "", second = "";
    
    while(a){
        first += a % 2 + '0';
        a /= 2;
    }
    while(b){
        second += b % 2 + '0';
        b /= 2;
    }
    reverse(first.begin(), first.end());
    reverse(second.begin(), second.end());

    swap(first[n], second[n]);
    
    cout << first << " " << second << endl;


    return 0;
}