#include<iostream>
using namespace std;

int main(){

    int n; cin >> n;    
    int arr[n][n];    
    
    int len = n, k = 1, p = 0;    
    
    while(k <= n * n){

        cout << "for 1:\n";
        for(int i = p; i < len; i++){
            arr[p][i] = k++;
            cout << p << " " << i << " " << len << endl;
        }

        cout << endl << "for 2:\n";
        for(int i = p + 1; i < len; i++){
            arr[i][len - 1] = k++; 
            cout << p + 1 << " " << i << " " << len << endl;
        }

        cout << endl << "for 3:\n";
        for(int i = len - 2; i >= p; i--){
            arr[len - 1][i] = k++; 
            cout << len - 2 << " " << i << " " << p << endl;
        }

        cout << endl << "for 4:\n";
        for(int i = len - 2; i > p; i--){
            arr[i][p] = k++; 
            cout << len - 2 << " " << i << " " << p << endl;
        }
        p++; 
        len = len - 1;  
        cout << endl;  
        }    
    
    if(!n % 2) arr[(n + 1) / 2][(n + 1) / 2]= n * n;    
    
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){ 
    //         cout << arr[i][j] << " "; 
    //     } 
    //     cout << endl;    
    // }  
}   