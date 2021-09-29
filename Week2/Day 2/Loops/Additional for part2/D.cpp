#include <iostream>
using namespace std;

int main(){

    int n, k, prodn = 1, prodk = 1, prodnk = 1; cin >> n >> k;

    for(int i = 1; i <= n; i++)
        prodn *= i;

    for(int i = 1; i <= k; i++)
        prodk *= i;

    for(int i = 1; i <= n - k; i++)
        prodnk *= i;

    cout << prodn / (prodk * prodnk);

    return 0;
}
