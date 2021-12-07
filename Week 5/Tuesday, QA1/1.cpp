#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int m; cin >> m;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        bool find = false;
        for(int j = 0; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(arr[j] + arr[k] == x){
                        find = true;
                        break;
                }
            if(find) break;
            }
        }
        if(find) cout << "YES\n";
        else cout << "NO\n";
    }
}

// 9
// 1 1 7 7 8 10 10 10 8
// 6 
// 8 18 30 20 1 16

// 8
// if arr[0](1) + arr[1](1) == 8 -> ignore
// arr[0](1) + arr[2](7) == 8 -> cout << "YES" -> break;

// O(n ^ 2)


// 5
// 1 2 3 4 5

// O(5)
// for(int i = 0; i < n; i += 2)
// n = 5
// O(5)

// n = 5
// 1. i = 0
// 2. i = 2
// 3. i = 4
// O(3)

// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){

//     }
// }
// O(n ^ 2)

// n = 3
// O(n ^ 2)

// i = 0
// j = 0, j = 1, j = 2

// i = 1
// j = 0, j = 1, j = 2

// i = 2
// j = 0, j = 1, j = 2


// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//         for(int k = 0; k < n; k++){

//         }
//     }
// }

// i = 0
// j = 0 

// n = 3
// 1. i = 0, j = 0, k = 0 
// 2. i = 0, j = 0, k = 1 
// 3. i = 0, j = 0, k = 2
// 4. i = 0, j = 1, k = 0
// 5. i = 0, j = 1, k = 1
// 6. i = 0, j = 1, k = 2
// 7. i = 0, j = 2, k = 0
// 8. i = 0, j = 2, k = 1
// 9. i = 0, j = 2, k = 2
// 10. i = 1, j = 0, k = 0
// 11. i = 1, j = 0, k = 1 
// 12. i = 1, j = 0, k = 2
// 13. i = 1, j = 1, k = 0
// 14. i = 1, j = 1, k = 1
// 15. i = 1, j = 1, k = 2
// 16. i = 1, j = 2, k = 0
// 17. i = 1, j = 2, k = 1
// 18. i = 1, j = 2, k = 2
// 19. i = 2, j = 0, k = 0
// 20. i = 2, j = 0, k = 1 
// 21. i = 2, j = 0, k = 2
// 22. i = 2, j = 1, k = 0
// 23. i = 2, j = 1, k = 1
// 24. i = 2, j = 1, k = 2
// 25. i = 2, j = 2, k = 0
// 26. i = 2, j = 2, k = 1
// 27. i = 2, j = 2, k = 2
// O(n ^ 3)

// 2.5
// O(n ^ 2)

// n = 100

// O(n ^ 3)

// 100 * 100 * 100 = 1000000
// n = 
// O(n)

// 1000000
// O(n)

// O(n ^ 3)
// 1000000000000000000