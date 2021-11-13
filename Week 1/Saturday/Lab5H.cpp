#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int max = 0;
    int arr[10];

    for(int i = 0; i < 10; i++)
        arr[i] = 0;

    for(int i = 0; i < s.size(); i++)
        arr[s[i] - '0']++;

    for(int i = 0; i < 10; i++)
        if(max < arr[i]) max = arr[i];

    for(int i = 0; i < 10; i++){
        if(arr[i] != 0){
            if(arr[i] != max){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}

// arr[10] = {32, 42, 43, 21, 65, 5676575, 4, 76, 86, 666645}
// arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

// s = "12344"
// s[0] = '1' - '0' = 49 - 48 = 1
// arr[10] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0}

// s[1] = '2' - '0' = 50 - 48 = 2
// arr[10] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0}

// s[2] = '3' = '0' = 51 - 48 = 3
// arr[10] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0}

// s[3] = '4' - '0' = 52 - 48 = 4
// arr[10] = {0, 1, 1, 1, 1, 0, 0, 0, 0, 0}

// s[4] = '4' - '0' = 52 - 48 = 4
// arr[10] = {0, 1, 1, 1, 2, 0, 0, 0, 0, 0}
