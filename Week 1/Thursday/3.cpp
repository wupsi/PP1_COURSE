#include <iostream>
using namespace std;

int main(){

    string s = "Hello World";

    string sub = s.substr(6, 5);

    string p; cin >> p;

    int pos = s.find(p);

    // if(pos != -1) cout << "Naiden";
    // else cout << "Ne naiden";

    // cout << endl << pos;

    for(int i = 0; i < s.size(); i++){
        int posx = s.find('l');
        if(posx != -1){
            cout << "Naiden na pos " << posx << endl;
            s[posx] = '.';
        }
        else{
            cout << "Ne naiden" << endl;
            return 0;
        }
    }

    return 0;
}