#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    char temp = s[0];
    string segment = "", max = "";
    segment += temp, max += temp;

    for(int i = 1; i < s.size(); i++){
        if(temp != s[i] or i == s.size() - 1){
            if(i == s.size() - 1 and temp == s[i]) segment += s[i];
            cout << segment << endl;
            if(segment.size() > max.size()) max = segment;
            segment = s[i];
        }
        else segment += s[i];
        temp = s[i];
    }
    cout << max[0] << " " << max.size();
}

// "helloooaaaaee"
// temp = 'h'
// segment = "h";

// temp != 'e'
// segment = "e";

// temp = 'e'
// temp != 'l'
// segment = "l"
// temp = 'l'

// temp != 'l'
// segment += s[i]
// segment = 'll'
