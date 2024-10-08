#include <iostream>
#include <string>
using namespace std;

string remove_substr(string &str,string substr)
{
    //check lenght is greater than substr and !=0
    while(str.length()!=0 && str.find(substr)<str.length()){
        str.erase(str.find(substr),substr.length());
    }
    return str;
}

int main()
{
    string str="axxxyyyb";
    string substr="xy";
    cout<<remove_substr(str,substr);
}
