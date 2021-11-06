#include <iostream>
using namespace std;

int main(){
    
    string str = "We think in generalities, live but we in details.";

    string str2 = str.substr (3, 5);     // "think"

//   string sub = str.substr(pos, len);

    if(str.find("live") == -1) cout << "\nNO\n";
    else cout << "\nYES\n";
    
    string str3 = str.substr(26);     // get from "live" to the end

    cout << str2 << " = " << str3 << '\n';
    cout << str.size();

    return 0;
}