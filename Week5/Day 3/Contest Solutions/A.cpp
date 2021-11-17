#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int max = 0;
    int arr[26];

    for(int i = 0; i < 26; i++)
        arr[i] = 0;

    for(int i = 0; i < s.size(); i++)
        arr[s[i] - 'a']++;

    for(int i = 1; i < 26; i++)
        if(arr[max] < arr[i]) max = i;

    cout << char(max + 'a');

    return 0;
}
нуртай настоящий котак
амы котак
нуртай счка нуратй ептваюмать абубубебе 
емшеги котак 
