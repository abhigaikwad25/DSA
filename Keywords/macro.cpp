#include<iostream>
using namespace std;

//define macro  for square
#define square(x) (x*x)
#define PI 3.14


int main(){
    int x=5;

    int result=square(x);
    cout<<"Square of "<<x<<" is "<<result<<endl;

    int area=PI*x*x;
    cout<<"Area is "<<area<<endl;
    cout<<"PI value is "<<PI;
}
