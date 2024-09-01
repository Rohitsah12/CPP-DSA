// #include<bits/stdc++.h>
// using namespace std;
// //User defined data structure
// class Stack{
// public:
//     int arr[10];
//     int idx;
//     Stack(){
//         idx=-1;
//     }
//     void push(int val){
//         idx++;
//         arr[idx]=val;
//     }
//     void pop(){
//         idx--;
//     }
//     int top(){
//         return arr[idx];
//     }
//     int size(){
//         return idx+1;
//     }
// };
// int main(){
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(23);
//     cout<<st.size();


// }

#include <bits/stdc++.h>
using namespace std;

// User-defined data structure
class Stack {
public:
    vector<int> arr;
    Stack() {
        // No need to initialize idx explicitly as we use the vector size to track the top index
    }

    void push(int val) {
        arr.push_back(val);
    }

    void pop() {
        if (!arr.empty()) {
            arr.pop_back();
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    int top() {
        if (!arr.empty()) {
            return arr.back();
        } else {
            throw runtime_error("Stack is empty");
        }
    }

    int size() {
        return arr.size();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(23);

    cout << st.size() << endl;  // This will correctly print the size of the stack

    return 0;
}
