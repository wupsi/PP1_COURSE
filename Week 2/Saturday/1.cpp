#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    map<string, int> mp;
    string arr[n];

    for(int i = 0; i < n; i++){
        string name; cin >> name;
        arr[i] = mp[name] ? "user already exists" : "new user added";
        mp[name]++;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;
    
}
// 5
// Alikhan
// Aida
// Aida
// Meirkhan
// Alikhan

// 1.
// cin >> "Alikhan"
// mp["Alikhan"]: added

// 2.
// cin >> "Alikhan"
// mp["Alikhan"] exists
