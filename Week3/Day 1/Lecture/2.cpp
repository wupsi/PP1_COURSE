#include <iostream>
using namespace std;

int main(){

    int n, max = -99999999; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num; cin >> num;
            if(max < num) max = num;
        }
    }

    cout << max;

    return 0;
}
