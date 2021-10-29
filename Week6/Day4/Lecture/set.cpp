#include <iostream>
#include <set>
using namespace std;

int main(){

    int n; cin >> n;
    set<int> st;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        st.insert(num);
    }

    set<int> :: iterator it = st.begin();

    for(it; it != st.end(); it++){
        cout << *it << " ";
    }    
    
    set<int> :: iterator del = st.begin();
    del++;
    del++;

    st.erase(del);
    cout << endl;

    for(it = st.begin(); it != st.end(); it++){
        cout << *it << " ";
    }    

    st.erase(4);
    cout << endl;

    for(it = st.begin(); it != st.end(); it++){
        cout << *it << " ";
    }

    return 0;
}

// vector: [1, 2, 2, 3, 4, 5, 4, 1]

// set: [1, 2, 3, 4, 5]

// set.insert(6): [1, 2, 3, 4, 5, 6]

// set.insert(8): [1, 2, 3, 4, 5, 6, 8]

// set.insert(7): [1, 2, 3, 4, 5, 6, 7, 8]

// set.insert(5): [1, 2, 3, 4, 5, 6, 7, 8]