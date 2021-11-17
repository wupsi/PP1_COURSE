#include <iostream>
#include <set>
using namespace std;

int main(){

    int n; cin >> n;
    set<int> st;

    while(true){
        n++;
        int num = n;
        while(num){
            st.insert(num % 10);
            num /= 10;
        }
        if(st.size() == 4){
            cout << n;
            return 0;
        }
    }
}

// 2021
// st: 0 1 2

// 2022
// st: 0 2

// 2023
// st: 0 2 3

// 2031
// st: 0 1 2 3
