#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string t;
    int max = -999;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int sum = 0;
        for(int j = 0; j < m; j++){
            int num;
            cin >> num;
            sum = sum + num;
        }
        if(sum > max){
            max = sum;
            t = s;
        }
        cout << s << " - " << sum << endl;
    }
    cout << "The best:" << endl;
    cout << t << " " << max;
}