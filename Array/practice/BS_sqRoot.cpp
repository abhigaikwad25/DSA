#include<iostream>
using namespace std;

int squareRoot(int num){
    int start=0;
    int end=num;
    long long  ans=-1;
    while(start<=end){
        long long int mid=start+(end-start)/2;
        //if use only int then it will go outside the range of 2^31
        long long int square=mid*mid;
        if(square==num){
            return mid;
        }
        if(square>num){
            end=mid-1;
        }
        if(square<num){
            start=mid+1;
            ans=mid;
        }
    }
    return ans;
}
double morePrecision(int num,int precision,int tempAns){
    double factor=1;
    double ans=tempAns;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<num;j=j+factor){
            ans=j;
        }
    }
    return ans;
}


int main(){
    int num;
    cout<<"Enter the number inside Square Root : ";
    cin>>num;

    int tempAns=squareRoot(num);
    cout<<"Square Root of "<<num<<" is "<<morePrecision(num,3,tempAns);
}