#include <iostream>
using namespace std;

int main(){

    int n, sz = 0; cin >> n;
    string gmail = "moc.liamg@", temp = "", begin = "";
    string arr[10000];

    for(int i = 0; i < n; i++){
        string email; cin >> email;
        if(email.size() > 10){
            for(int i = email.size() - 1; i >= email.size() - 10; i--) temp += email[i];
            if(temp == gmail){
                for(int i = 0; i < email.size() - 10; i++) begin += email[i];
                arr[sz] = begin;
                sz++;
            }
            temp = "";
            begin = "";
        }
    }

    for(int i = 0; i < sz; i++) cout << arr[i] << endl;
}
