#include <iostream>
#include <string>
using namespace std;

char isvalid(int ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
        return ch;
    }
    return 0;
}

char lowercase(int ch){
    if(ch>='a'&&ch<='z' || ch>='0'&&ch<='9'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a'; //this formula are based on ASCII value
        return temp;
    }
}

bool checkPalindrome(string name)
{
    int s=0;
    int e=name.length()-1;
    int result=1;
    while(s<=e){
        if(name[s]!=name[e]){
            result=0;
            break;
        }
        s++;
        e--;
    }
    return result;
}

bool ispalindrome(string name,int n,string temp){

    //check it is valid if not cant push in temp,ignore them 
    for(int i=0;i<n;i++){
        if(isvalid(name[i])){
            temp.push_back(isvalid(name[i]));
        }
    }

    //convert all in lower case
    for(int j=0;j<n;j++){
        temp[j]=lowercase(temp[j]);
    }

    return checkPalindrome(temp);
}


int main()
{
    string name="A man, a plan, a canal: Panama"; 
    string temp="";

    int n = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        n++;
    }

    if(ispalindrome(name,n,temp)){
        cout<<"Palindrome of string ("<<name<<" ) is TRUE";
    }
    else {
        cout<<"Palindrome of string ("<<name<<" ) id FALSE";
    }
}