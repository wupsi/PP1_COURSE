#include <iostream>
using namespace std;

int main(){

    int n, m, min = 9999999, pos = 0, num; cin >> n >> m;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            cin >> num;
            sum += num;
        }
        if(sum < min){
            min = sum;
            pos = i;
        }
    }

    cout << pos + 1;

    return 0;
}