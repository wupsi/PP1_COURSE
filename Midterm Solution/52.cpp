// #include <algorithm>
// #include <iostream>
 
// int main(){
//     std::string s = "aggddsbbbsddgga";
//     std::sort(s.begin(), s.end());
//     do {
//         std::cout << s << '\n';
//     } while(std::next_permutation(s.begin(), s.end()));
// }


#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int odd = 0;
    int arr[27];

    for(int i = 0; i < 27; i++)
        arr[i] = 0;

    for(int i = 0; i < s.size(); i++)
        arr[s[i] - 'a']++;

    for(int i = 0; i < 27; i++)
        if(arr[i] % 2 == 1) odd++;

    cout << (odd > 1 ? "Onepiece" : "Luffy is the pirate king!");

    return 0;
}


// zozo - ozzo
// usop - no
// abaab - ababa 
// naaaano - naaoaan


// "aggdedsbbbrrsdrdggar"

// a - 2
// b - 3
// g - 4
// d - 4
// s - 2
// r - 4
// e - 1

// s[0] = 'd'
// arr['d' - 'a'] = arr[3];
// arr[3]++;

// s[1] = 'd'
// arr['d'(100) - 'a'(97)] = arr[3];
// arr[3]++;

// s[2] = 'g'
// arr['g' - 'a'] = arr[6];
// arr[6]++;