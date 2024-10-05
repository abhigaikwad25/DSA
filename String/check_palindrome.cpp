#include <iostream>
using namespace std;

bool is_Palindrome(char name[], int n)
{
    int s=0;
    int e=n-1;
    int result=1;
    while(s<=e){
        if(name[s]!=name[e]){
            result=0;
        }
        s++;
        e--;
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
}