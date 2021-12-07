#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    double best = 0, worst = 1e9;
    int bestPos = 1, worstPos = 1;

    for(int i = 0; i < n; i++){
        int m; cin >> m;
        double average = 0;
        for(int j = 0; j < m; j++){
            string name, surname; cin >> name >> surname;
            int points; cin >> points;
            average += points;
        }
        if(average / m > best){
            best = average / m;
            bestPos = i + 1;
        }
        if(average / m < worst){
            worst = average / m;
            worstPos = i + 1;
        }
    }

    cout << "The " << worstPos << " flow is the most fucked up.\nThe " << bestPos << " flow is the most bada$$.";
}
