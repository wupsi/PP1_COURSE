#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double arr[1000];
    int ind = 0;
    while(true){
        double x; cin >> x;
        if(x == 0) break;
        arr[ind] = x;
        ind++;
    }
    for(int i = ind - 1; i >= 0; i--) 
        cout << sqrt(arr[i]) << endl;
}
