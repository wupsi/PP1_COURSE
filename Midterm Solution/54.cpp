#include <bits/stdc++.h>
using namespace std;
int max=-999999;
int gcd(int a, int b){
    return(a==0)?b:gcd(b%a,a);

}

int main(){
    int max=-99999;
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            cout<<gcd(arr[i],arr[j])<<" ";
            if(gcd(arr[i],arr[j])>max) max=gcd(arr[i],arr[j]);
        }
    }
    cout<<max;
    
  
}