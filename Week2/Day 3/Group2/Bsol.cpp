#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    int n, x; cin>>n>>x;
    for(int i = 1; i <= n; i++){
        int temp = i, digits = 0;

        while(temp){
            int x = temp % 10;
            temp /= 10;
            digits++;
        }
        int y = pow(10, digits - 1);
        if(i / y == x) cout << i << " ";
        else if(i % 10 == x) cout << i << " ";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main(){
//     int n, x, first, temp; cin >> n >> x;
//     for(int i = 1; i <= n; i++){
//         temp = i;
//         cout << i << ": "; 
//         while(temp > 0){
//             first = temp % 10;
//             temp /= 10;
//             cout << first << " ";
//         }
//         if(first == x) cout << "YES:" << i << " ";
//         else if(i % 10 == x) cout << "YES:" << i << " ";
//         cout << endl;
//     }
// }