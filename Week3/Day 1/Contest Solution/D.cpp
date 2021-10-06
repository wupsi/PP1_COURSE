// Problem C: Even/Odd
// —————————————————————
// Найдите количество нулей, четных чисел и нечетных чисел.

// Input Format: Первая строка содержит два числа n  и m - размер массива. Дальше даны элементы массива n x m.
// Output Format: Выведите 3 числа: кол-во нулей, четных чисел и нечетных чисел соответственно.

#include <iostream>
using namespace std;

int main(){

    int n, m, zero = 0, even = 0, odd = 0; cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int num; cin >> num;
            if(num == 0) zero++;
            else if(num % 2 == 0) even++;
            else odd++;
        }
    }
    cout << "Number of zeros: " << zero << "\nNumber of even: " << even << "\nNumber of odd: " << odd;
}