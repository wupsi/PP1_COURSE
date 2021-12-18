#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

bool isPrime(int num){
    if(num == 1 or num == 0) return false;
    else if(num == 2) return true;
    for(int i = 2; i * i <= num; i++) if(num % i == 0) return false;
    return true;
}

bool PowerOfTwo(int x){
    for(int i = 1; i <= x; i *= 2)
        if(i == x) return true;
    return false;
}

bool PowerOfThree(int x){
    for(int i = 1; i <= x; i *= 3)
        if(i == x) return true;
    return false;
}

int main(){

    int n;
    map<int, int> mp;

    while(cin >> n) if(!(isPrime(n) or PowerOfTwo(n) or PowerOfThree(n))) mp[n]++;

    for(auto i : mp) if(i.second == 1) cout << i.first << " ";
}