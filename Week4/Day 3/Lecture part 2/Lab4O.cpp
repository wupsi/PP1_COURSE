#include <iostream>
using namespace std;

int main(){

    int n, max = -99999999, posx = 0, posy = 0; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num; cin >> num;
            if(i == j and max < num){
                max = num;
                posx = i;
                posy = j;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << posx + 1 << ";" << posy + 1; 

    return 0;
}