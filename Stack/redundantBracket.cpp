#include<iostream>
#include<stack>
using namespace std;

bool findRedundant(stack<char> &st,string str){
    
    for(int i=0;i<str.size();i++){
        char ch=str[i];

        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            st.push(ch);
        }
        else{

            //ch is ) bracket hai ya letter hai 
            if(ch==')'){
                bool isRedundant=true;
                char top=st.top(); 
                while(st.top()!='('){
                    if(top=='+'||top=='-'||top=='*'||top=='/'){
                        isRedundant=false;
                    }
                    //pop if operator is found netween brackets
                    //Firstly update the isRedundant value 
                    st.pop();
                }
                if(isRedundant==true)
                    return true;
                //pop if operator is not found netween brackets
                st.pop();
            }
        }
    }

    return false;
}

int main(){
    stack<char> st;

    string str="(a+b)";

    if(findRedundant(st,str)){
        cout<<"Redundant"<<endl;
    }
    else{
        cout<<"Non Redundant"<<endl;
    }
}