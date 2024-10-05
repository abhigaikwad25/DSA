#include<iostream>
using namespace std;
#include<map>

int main(){
    map<int,string> m;

    m[13]="Gaikwad";
    m[1]="Abhijit";
    m[2]="Nandlal";


    cout<<"Before erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(2);

    cout<<"After erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    // using inser keyword
    cout<<"Insert something : "<<endl;
    m.insert({5,"Nandlal"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Check 1 is present or not : "<<m.count(1)<<endl;

    //find will taking the reference of that and you can do operation forward
    auto itr=m.find(5);
    for(auto i=itr;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

    

}