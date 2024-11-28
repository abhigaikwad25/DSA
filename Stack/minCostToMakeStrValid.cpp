#include<iostream>
#include<stack>
using namespace std;

void minCostToMakeStrValid(stack<char> stk,string str){

    // if length is odd
    if(str.length()%2==1){
        return ;
    }
    for(int i=0;i<str.size();i++){
        char ch=str[i];

        if(ch=='{'){
            stk.push(ch);
        }
        else{
            if(!stk.empty()&&stk.top()=='{'){
                stk.pop();
            }
            else{
                stk.push(ch);
            }
        }
    }

    int a=0,b=0;
    while(!stk.empty()){
        if(stk.top()=='{'){
            a++;
        }
        else{
            b++;
        }
        stk.pop();
    }
    int ans=(a+1)/2 + (b+1)/2;
    cout<<"Min Cost to Make String Valid : "<<ans<<endl;
}

int main(){
    stack<char> stk;

    string str="}}}}{}";

    minCostToMakeStrValid(stk,str);
}