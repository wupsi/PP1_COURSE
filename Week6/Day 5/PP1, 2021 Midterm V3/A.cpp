#include <iostream>
using namespace std;

int main(){

    int n, m, k; cin >> n >> m >> k;

    if(k > (n + m) * 0.1) cout << "Boris nakazan";
    else cout << "Boris molodec";

    return 0;
}

// n - кол-во чебуреков с сыром
// m - кол-во чебуреков с сосиской
// k - кол-во чебуреков, которые съел Борис

// Если кол-во чебуреков которые съел Борис больше чем 10% - Борис наказан, иначе, Борис молодец

// 5 9 7

// 7 > (5 + 9) * 0.1 