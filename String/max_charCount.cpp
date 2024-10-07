#include <iostream>
#include <string>
using namespace std;

//return those char that have a maximum count occurence char
char getMaxOccuChar(string name)
{
    int arr[26] = {0};
    int n = name.length();

    for (int i = 0; i < n ; i++)
    {
        int number = 0;
        char ch = name[i];
        // LowerCase
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        // uppercase
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    
    char finalans = 'a' +ans;
    return finalans;
}

int main()
{
    string name;

    cout << "Enter your name : ";
    cin >> name;

    int n = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        n++;
    }

    cout << "Maximum occurence in a to z : " << getMaxOccuChar(name);
}





// #include <iostream>
// #include <string>
// using namespace std;

// // Function to return the character with maximum occurrence
// char getMaxOccuChar(string name) {
//     // Create an array to store the count of each character
//     int arr[26] = {0};
//     int n = name.length();

//     // Count the occurrences of each character (a-z)
//     for (int i = 0; i < n; i++) {
//         int number = 0;
//         char ch = name[i];

//         // Check for lowercase characters
//         if (ch >= 'a' && ch <= 'z') {
//             number = ch - 'a'; // Get the index for lowercase letters
//         }
//         // Check for uppercase characters
//         else if (ch >= 'A' && ch <= 'Z') {
//             number = ch - 'A'; // Get the index for uppercase letters
//         }
//         // Increment the count in the frequency array
//         arr[number]++;
//     }

//     // Find the character with maximum occurrences
//     int maxi = -1;
//     int ans = 0;
//     for (int i = 0; i < 26; i++) { // Loop over the frequency array (0-25)
//         if (maxi < arr[i]) {
//             ans = i;
//             maxi = arr[i];
//         }
//     }

//     // Return the character with the maximum frequency
//     char finalAns = 'a' + ans; // Convert index back to character
//     return finalAns;
// }

// int main() {
//     string name;

//     // Input the string from the user
//     cout << "Enter your name: ";
//     cin >> name;

//     // Display the character with the maximum occurrence
//     cout << "Maximum occurrence in a to z: " << getMaxOccuChar(name) << endl;

//     return 0;
// }
