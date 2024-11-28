#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> st;
    string str="Hello World";

    int n=str.size();

    for(int i=0;i<n;i++){
        st.push(str[i]);
    }

    for(int i=0;i<n;i++){
        cout<<st.top();
        st.pop();
    }

}