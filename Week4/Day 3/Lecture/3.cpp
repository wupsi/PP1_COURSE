#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s = "Hello World!";

    reverse(s.begin(), s.end());
    sort(s.begin(), s.end());
    // reverse(posx, posy);

    cout << s;

    return 0;
}
