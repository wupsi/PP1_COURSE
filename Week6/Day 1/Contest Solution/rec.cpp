// вывод чисел от 0 до n

#include <iostream>
using namespace std;

void Rec(int a, int i){
    if(i == a) return;
    cout << i++ << endl;
    Rec(a, i);
}

bool check()

int main(){

    int n; cin >> n;

    // for(int i = 0; i < n; i++) // - форик
    //     cout << i << endl;

    // Rec(n, 0);

    cout << (ok ? "YES" : "NO");
}