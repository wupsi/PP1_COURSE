#include <iostream>
#include <set>
using namespace std;

int main(){

    string p, s = ""; cin >> p;
    int n, k = p.size(); cin >> n;
    set<string> st;

    for(int i = 0; i < n; i++)
        s += p[i % k];

    for(int i = 0; i < s.size(); i++)
        for(int j = i; j < s.size(); j++)
            st.insert(s.substr(i, j - i + 1));

    cout << st.size();
}

// [abbaabb]

// a
// ab
// abb
// abba
// abbaa
// abbaab
// abbaabb

// b
// bb
// bba
// bbaa
// bbaab
// bbaabb

// b
// ba
// baa
// baab
// baabb

// a
// aa
// aab
// aabb

// a
// ab
// abb

// b
// bb

// b


// p = "abba"
// k = 4
// n = 7
// s[i] = p[i % k]
// s = ""

// i = 0: p[0 % 4] = p[0], s = "a"
// i = 1: p[1 % 4] = p[1], s = "ab"
// i = 2: p[2 % 4] = p[2], s = "abb"
// i = 3: p[3 % 4] = p[3], s = "abba"
// i = 4: p[4 % 4] = p[0], s = "abbaa"
// i = 5: p[5 % 4] = p[1], s = "abbaab"
// i = 6: p[6 % 4] = p[2], s = "abbaabb"
// s = "abbaabb"
