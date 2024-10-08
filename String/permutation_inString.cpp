#include <iostream>
#include <string>
using namespace std;

bool checkEqual(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

bool string_permutation(string s1, string s2)
{

    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return 1;
    }
    // aage window process karo
    while (i < s2.length())
    {
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;

        char oldchar = s2[i - windowSize];
        index = oldchar - 'a';
        count2[index]--;

        i++;

        if (checkEqual(count1, count2))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s1 = "ab";
    string s2="eidbaooo";

    cout << string_permutation(s1, s2);
}



// Example:
// cpp
// Copy code
// string s1 = "ab";
// string s2 = "eidbaooo";
// Goal:
// Check if any substring of s2 is a permutation of s1. A permutation means that two strings have the same characters in any order. So, we are trying to find if any substring of s2 is a permutation of "ab".

// Step-by-step Execution:
// Calculate frequency of characters in s1: We need to keep track of how many times each character appears in s1. We do this by using an array count1[] where each index represents a letter (0 for 'a', 1 for 'b', and so on).

// For s1 = "ab":

// 'a' has index 0 → increment count1[0] by 1.
// 'b' has index 1 → increment count1[1] by 1.
// Now, count1[] looks like this:

// cpp
// Copy code
// count1 = [1, 1, 0, 0, 0, ..., 0]; // only 'a' and 'b' have non-zero values
// Sliding Window on s2: The idea is to look at all substrings of s2 that are the same length as s1 (2 characters long in this case). We’ll check if these substrings are permutations of s1.

// Initialize the first window on s2: We calculate the frequency of the first window (first two characters) of s2 = "eidbaooo".

// First window ("ei"):

// 'e' has index 4 → increment count2[4] by 1.
// 'i' has index 8 → increment count2[8] by 1.
// Now, count2[] looks like this:

// cpp
// Copy code
// count2 = [0, 0, 0, 0, 1, 0, 0, 0, 1, ..., 0]; // frequencies of 'e' and 'i'
// Since count1[] and count2[] don’t match, the first window "ei" is not a permutation of "ab".

// Slide the window across s2: Now, we slide the window by one character at a time. For each new character that enters the window, we increment its count in count2[], and for the character that leaves the window, we decrement its count.

// Next window "id":

// Add 'd' (index 3) → count2[3]++.
// Remove 'e' (index 4) → count2[4]--.
// Updated count2[]:

// cpp
// Copy code
// count2 = [0, 0, 0, 1, 0, 0, 0, 0, 1, ..., 0]; // frequencies of 'd' and 'i'
// This does not match count1[], so "id" is not a permutation of "ab".

// Next window "db":

// Add 'b' (index 1) → count2[1]++.
// Remove 'i' (index 8) → count2[8]--.
// Updated count2[]:

// cpp
// Copy code
// count2 = [0, 1, 0, 1, 0, 0, 0, 0, 0, ..., 0]; // frequencies of 'd' and 'b'
// This still does not match count1[].

// Next window "ba":

// Add 'a' (index 0) → count2[0]++.
// Remove 'd' (index 3) → count2[3]--.
// Updated count2[]:

// cpp
// Copy code
// count2 = [1, 1, 0, 0, 0, 0, 0, 0, 0, ..., 0]; // frequencies of 'b' and 'a'
// Now, count2[] matches count1[], meaning that the substring "ba" is a permutation of "ab".

// Thus, the function returns 1 (true), indicating that a permutation of "ab" exists in s2.