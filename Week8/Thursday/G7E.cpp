#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int left = n - 1, right = n - 1;

    for(int x = 0; x < n * 2 - 1; x++){
        for(int y = 0; y < n * 2 - 1; y++){
            // cout << "[" << x << ", " << y << "] ";
            if(n % 2 == 1){
                if(x % 2 == 0 and y % 2 == 0 and y >= left and y <= right) cout << "*";
                else if(x % 2 == 1 and y % 2 == 1 and y >= left and y <= right) cout << "*";
                else cout << " ";
            }
            else{
                if(x % 2 == 0 and y % 2 == 1 and y >= left and y <= right) cout << "*";
                else if(x % 2 == 1 and y % 2 == 0 and y >= left and y <= right) cout << "*";
                else cout << " ";

            }
        }
        if(x == n) left++, right--;
        if(x < n) left--, right++;
        else left++, right--;
        cout << endl;
    }

}

// if(n % 2 == 1)
// n = 5
// [0, 4]
// [1, 3], [1, 5]
// [2, 2], [2, 4], [2, 6]
// [3, 1], [3, 3], [3, 5], [3, 7]
// [4, 0], [4, 2], [4, 4], [4, 6], [4, 8]
// [5, 1], [5, 3], [5, 5], [5, 7]
// [6, 2], [6, 4], [6, 6]
// [7, 3], [7, 5]
// [8, 4]

// x = 0, y = 4
// x = 1, y = 3
// x = 1, y = 5
// x = 2, y = 2
// x = 2, y = 4
// x = 2, y = 6
// x = 3, y = 1
// x = 3, y = 3
// x = 3, y = 5
// x = 3, y = 7
// x = 4, y = 0
// x = 4, y = 2
// x = 4, y = 4
// x = 4, y = 6
// x = 4, y = 8

// if(n % 2 == 0)
// n = 4
// [0, 3]
// [1, 2], [1, 4]
// [2, 1], [2, 3], [2, 5]