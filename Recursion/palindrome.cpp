//****************First Approach *******************/
// #include <iostream>
// using namespace std;

// bool reverse(string& str, int i, int j,const string& originalStr)
// {
//     // base case
//     if (i > j)
//         return originalStr==str;

//     // Processing
//     swap(str[i], str[j]);
//     i++;
//     j--;

//     // Recursive relation
//     return reverse(str, i, j,originalStr);
// }

// int main()
// {
//     string str = "abbaaaaaaa";
//     string originalStr=str;
//     int i = 0;
//     int j = str.length()-1;
    

//     if(reverse(str, i, j,originalStr)){
//         cout<<"String is palindrome";
//     }
//     else{
//         cout<<"String is not palindrome";
//     }
// }





//****************Second Approach *******************/
#include <iostream>
using namespace std;

bool reverse(string& str, int i, int j)
{
    // base case
    if (i > j)
        return true;

    // Recursive relation
    if(str[i]!=str[j]){
        return false;
    }
    else{
        i++;
        j--;
        return reverse(str, i, j);
    }
}

int main()
{
    string str = "abba";
    int i = 0;
    int j = str.length()-1;
    

    if(reverse(str, i, j)){
        cout<<"String is palindrome";
    }
    else{
        cout<<"String is not palindrome";
    }
}
