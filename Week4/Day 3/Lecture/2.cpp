#include <iostream>
using namespace std;

int main(){
  string str = "We think in generalities, live but we in details.";
                                           // (quoting Alfred N. Whitehead)

  string str2 = str.substr (3,5);     // "think"

  string str3 = str.substr(str.find("live"));     // get from "live" to the end

  cout << str2 << ' ' << str3 << '\n';
    // cout << pos;

  return 0;
}