#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int num, prod = 1, sum = 0; 
        cin >> num;
        while(num > 0){
            sum += num % 10;
            prod *= num % 10;
            num /= 10;
        }
        cout << sum << " " << prod << endl;
    }

    return 0; 
}
