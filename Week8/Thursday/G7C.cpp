#include <iostream>
using namespace std;

long long arr[1000] = {0, 1, 1};

long long SumOfTribonacci(int i, long long sum, int n){
    if(i == n) return sum;
    if(i >= 3) arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    sum += arr[i];
    return SumOfTribonacci(++i, sum, n);
}

int main(){

    int n; cin >> n;
    cout << SumOfTribonacci(0, 0, n);
}
