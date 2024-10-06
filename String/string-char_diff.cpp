#include <iostream>
#include <string>
using namespace std;


int main()
{
    //string and char array difference
    char name[20]; //this will be terminated using '\0' character 
    string name1; // this will be not terminated using '\0' character 

    name[0] = 'A';
    name[1] = 'b';
    name[2] = 'h';
    name[3] = 'i';
    name[4] = '\0';
    name[5] = 'j';
    name[6] = 'i';
    name[7] = 't';

    name1.push_back('A');
    name1.push_back('b');
    name1.push_back('h');
    name1.push_back('i');
    name1.push_back('\0');
    name1.push_back('j');
    name1.push_back('i');
    name1.push_back('t');
    

    cout << name << endl;
    cout << name1 << endl;

    int n = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        n++;
    }
}