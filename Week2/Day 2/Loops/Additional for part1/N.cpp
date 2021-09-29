#include <iostream>
using namespace std;

int main(){

    int n, num, zero = 0, pos = 0, neg = 0; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num == 0) zero++;
        else if(num > 0) pos++;
        else neg++;
    }
    cout << zero << " " << pos << " " << neg;

    return 0;
}