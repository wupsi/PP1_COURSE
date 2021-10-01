#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, m; cin >> n;
    int arr1[n];

    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;
    int arr2[m], ans[n + m];
    
    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    for(int i = 0; i < n + m; i++){
        if(i < n) ans[i] = arr1[i];
        else ans[i] = arr2[i - n];
    }

    sort(ans, ans + n + m);

    for(int i = 0; i < n + m; i++)
        cout << ans[i] << " ";
}