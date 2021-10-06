// Problem B: Максимум строки
// —————————————————————
// Найдите максимальный элемент для каждой строки.

// Input Format: Первая строка содержит n - размер массива. Дальше даны элементы массива n x n.
// Output Format: В каждой строке выведите максимальный элемент строки в массиве.

#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        int max = -99999999;
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(arr[i][j] > max) max = arr[i][j];
        }
        cout << max << endl;
    }
}