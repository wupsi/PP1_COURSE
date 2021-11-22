#include <iostream>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    multimap<double, string> mp;
    multimap<double, string> :: iterator it;

    for(int i = 0; i < n; i++){
        string date; cin >> date;
        double year = 0, month = 0, day = 0;
        double sum = 0, digit = 1;

        for(int i = date.size() - 1; i >= 6; i--){
            year += (date[i] - '0') * digit;
            digit *= 10;
        }
        digit = 1;

        for(int i = 4; i >= 3; i--){
            month += (date[i] - '0') * digit;
            digit *= 10;
        }
        digit = 1;

        for(int i = 1; i >= 0; i--){
            day += (date[i] - '0') * digit;
            digit *= 10;
        }

        year = (year - 1) * 365;
        month = (month - 1) * 30.5;
        sum = year + month + day;
        mp.insert(make_pair(sum, date));
    }

    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->second << endl;
}   
