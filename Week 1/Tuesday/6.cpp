#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m,cnt=0,max=0;

    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            cin>>a[i][j];
            if(max < a[i][j]) max = a[i][j];

        }

    }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(max == a[i][j]){
                cnt++;
                break;
            }

        }

    }

    cout << cnt;
}