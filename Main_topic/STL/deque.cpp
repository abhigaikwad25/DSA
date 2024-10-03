#include <iostream>
using namespace std;

// Header file for deque
#include <deque>

// Deque : Doubly Ended Queue
// It is also dynamic in nature
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "deque element : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // pop operation can not make changes directly in main deque
    //  d.pop_front();
    //  d.pop_back()

    // cout<<"After pop operation : "<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // erase first element

    cout<<"Size before erase : "<<d.size()<<endl;
    // d.erase(a, b);
    // a : define the starting range
    // b : define the ending range
    d.erase(d.begin(), d.begin() + 1);
    cout<<"Size after erase : "<<d.size()<<endl;
}
