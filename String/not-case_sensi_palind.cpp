#include <iostream>
using namespace std;

char lowercase(int ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool is_Palindrome(char name[], int n)
{
    int s=0;
    int e=n-1;
    int result=1;
    while(s<=e){
        if(lowercase(name[s])!=lowercase(name[e])){
            result=0;
            break;
        }
        if(name[s]>=0&&name[s]<=9 &&){
            s++;
            e--;

        }
    }
    return result;
}



int main()
{
    char name[20];

    cout << "Enter your name : ";
    cin >> name;

    int n = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        n++;
    }
    
    if(is_Palindrome(name, n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    cout<<"b : "<<lowercase('b')<<endl;
    cout<<"C : "<<lowercase('C')<<endl;
}