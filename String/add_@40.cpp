#include <iostream>
#include <string>
using namespace std;


//make chanes in changes in different string

string add_40(string &str)
{
    int len=str.length();
    string resstr="";
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            resstr.push_back('@');
            resstr.push_back('4');
            resstr.push_back('0');
        }
        else{
            resstr.push_back(str[i]);
        }
    }
    
    return resstr;
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    cout<<add_40(str);
}





// Make chages in same string 

#include <iostream>
#include <string>
using namespace std;

string add_40(string &str)
{
    int len=str.length();
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            str[i]='@';
            str.insert(i+1,"40");
            i+=2;
        }
    }
    
    return str;
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    cout<<add_40(str);
}
