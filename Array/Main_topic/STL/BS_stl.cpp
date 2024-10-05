#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


int main(){
    vector<int> bs;

    bs.push_back(1);
    bs.push_back(3);
    bs.push_back(2);
    bs.push_back(5);

    //gives 0 and 1 if present or not 
    cout<<"Findin 1 : "<<binary_search(bs.begin(),bs.end(),1)<<endl;

    cout<<"upper Bound : "<<upper_bound(bs.begin(),bs.end(),1)-bs.begin()<<endl;
    cout<<"lower Bound : "<<lower_bound(bs.begin(),bs.end(),1)-bs.begin()<<endl;

    int a=5;
    int b=10;

    cout<<"Maximum is : "<<max(a,b)<<endl;
    cout<<"Minimum is : "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"Reverse of abcd : "<<abcd<<endl;

    //In rotate rotate(a,b,c);
    //a : starting 
    //b : how many rotate 
    //a : ending

    rotate(abcd.begin(),abcd.begin()+1,abcd.end());
    cout<<"Rotated string : "<<abcd<<endl;

    cout<<"Before Sort "<<endl;
    for(int i:bs){
        cout<<i<<" ";
    }cout<<endl;

    sort(bs.begin(),bs.end());
    
    cout<<"After Sort "<<endl;
    for(int i:bs){
        cout<<i<<" ";
    }cout<<endl;

}