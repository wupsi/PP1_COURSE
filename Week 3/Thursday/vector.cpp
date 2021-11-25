#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    cout << "Vector:\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }


    cout << endl << "Vector back: " << v.back();
    cout << endl << "Vector front: " << v.front() << endl;
    
    sort(v.begin(), v.end());

    cout << "Sorted vector:\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    // v.clear() - очищает вектор;

    cout << endl << "Vector is empty?: ";
    cout << (v.empty() ? "Vector is empty" : "Vector is not empty");

    v.erase(v.begin(), v.begin() + 3);
    cout << endl << "Vector after erase:\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    v.insert(v.begin(), 2, 1);
    for(int i = 0; i < 3; i++){
        v.insert(v.begin() + i, i);
    }
    cout << endl << "Vector after insert elements:\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    v.pop_back();

    cout << endl << "Vector after pop_back():\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }


    cout << "\nAnother vector with string:\n";
    vector<string> v1;

    v1.push_back("G");
    v1.push_back("Hello");
    v1.push_back("World!");

    sort(v1[2].begin(), v1[2].end());
    cout << v1[2];
}
