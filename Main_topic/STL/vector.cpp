#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> vec;

    // size : current number of element on vector
    // capacity : actual size of array

    // initialize the vector with size
    vector<int> v(5,1);
    //five element initialize with 1
    cout << "vector element :" << endl;
    for (int i : v)
    {
        cout <<i<< " ";
    }
    cout << endl;



    // initialy size is 0
    cout << "Initial actual size of vector : " << vec.capacity() << endl;

    // adding one element in vector
    // size becomes 1
    vec.push_back(1);
    cout<<"actual size after adding one element : "<<vec.capacity()<<endl;

    // size becomes double of old size is 2
    vec.push_back(2);
    cout<<"actual size after adding another one element : "<<vec.capacity()<<endl;

    // size becomes double of old size is 4
    vec.push_back(3);
    cout<<"actual size after adding another one element : "<<vec.capacity()<<endl;

   

    // // gives how many elements is in array
    cout << "current size of vector : " << vec.size() << endl;

    // // check the element at specific location
    cout << "element at index 2 : " << vec.at(2) << endl;

    // // //check vector is empty or not (give s in Boolean)
    // cout<<"element at index 2 : "<<v.empty()<<endl;

    // // gives first element
    cout << "element at first position : " << vec.front() << endl;

    // // gives last element
    cout << "element at last position : " << vec.back() << endl;

    cout << "before pop :" << endl;
    for (int i : vec)
    {
        cout <<i<< " ";
    }
    cout << endl;

    //pop the last element
    vec.pop_back();

    cout << "after pop :" << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    //clear all entry
    vec.clear();
}