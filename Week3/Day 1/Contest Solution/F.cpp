// Problem A: Reverse Star Triangle
// —————————————————————
// Напишите программу, которая генерирует треугольник из [*]

// Input Format: В одной строке записано одно число n - количество строк и столбцов.
// Output Format: Выведите треугольник с n x n размером.

#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j >= n - 1) cout << "[*]";
            else cout << "   ";
        }
        cout << endl;
    }
}