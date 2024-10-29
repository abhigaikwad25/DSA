#include<iostream>
using namespace std;

void walkingHome(int src,int dest){
    cout<<"Source : "<<src<<" Destination : "<<dest<<endl;
    //Base case
    if(src==dest){
        cout<<"Pahuch gaya"<<endl;
        return ;
    }

    //processing - Taking one step forward
    src++;

    // recursive relation
    walkingHome(src,dest);

}

int main(){
    int dest=10;
    int src=1;

    walkingHome(src,dest);
}
