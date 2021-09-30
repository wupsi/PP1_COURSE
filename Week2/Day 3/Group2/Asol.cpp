#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int num, sum = 0, product = 1; cin >> num;

        while(num > 0){
            int x = num % 10;
            num /= 10;
            sum += x;
            product *= x;
        }
        cout << sum << " " << product << endl; 
    }

    return 0;
}
