#include<iostream>
#include<stack>
using namespace std;

bool isValidParen(stack<char> st,string str){
    
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        //if opening brackest push in stack
        //if closing bracket pop from stack

        if(ch=='('||ch=='['||ch=='{'){
            st.push(ch);
        }
        else{
            char top=st.top(); 
            if(!st.empty()){
                if(ch==')' && top=='(' ||
                    ch==']' && top=='[' ||
                    ch=='}' && top=='{' ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }

    if(st.empty()){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    stack<char> st;

    string str="{[()]}";

    if(isValidParen(st,str)){
        cout<<"Valid Parenthesis"<<endl;
    }
    else{
        cout<<"Not Valid Parenthesis"<<endl;
    }
}