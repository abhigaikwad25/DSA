#include<iostream>
using namespace std;
#include<set>

int main(){
    set<int> s;

    //always give in sorted manner with unique element
    s.insert(6);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(2);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);

    cout<<"After Erase : ";
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    //count : say value are preseent or not
    cout<<"3 persent or not : "<<s.count(2)<<endl;

    // This will give the reference of that value
    //find : give the reference of that value store it in veriable using syntax set<int>::iterator
    set<int>::iterator itr=s.find(3);
    
    cout<<"value from the itr "<<endl;
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}