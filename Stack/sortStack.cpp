#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &stk, int num)
{
    if (stk.empty() || (!stk.empty() && stk.top() < num))
    {
        stk.push(num);
        return;
    }

    int n = stk.top();
    stk.pop();

    sortedInsert(stk, num);

    stk.push(n);
}

void sortStack(stack<int> &stk)
{
    if (stk.empty())
    {
        return;
    }

    int num = stk.top();
    stk.pop();

    // After that all recusive call
    // firstly empty stack and after meet base case it will go to sortedInsert function
    sortStack(stk);

    // sortedInsert function sort add number in sorted manner
    sortedInsert(stk, num);
}

int main()
{
    stack<int> stk;

    stk.push(8);
    stk.push(3);
    stk.push(7);
    stk.push(2);

    sortStack(stk);
    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }
}










// Initial Stack
// stk = [8, 3, 7, 2]
// Note: The stack is drawn with the topmost element at the end.

// 1st Call to sortStack
// Stack: [8, 3, 7, 2]
// Action: Pop 2.
// Recursive call with stk = [8, 3, 7].

// 2nd Call to sortStack
// Stack: [8, 3, 7]
// Action: Pop 7.
// Recursive call with stk = [8, 3].

// 3rd Call to sortStack
// Stack: [8, 3]
// Action: Pop 3.
// Recursive call with stk = [8].

// 4th Call to sortStack
// Stack: [8]
// Action: Pop 8.
// Recursive call with stk = [].

// 5th Call to sortStack (Base Case)
// Stack: []

// Action: The stack is empty, return.
// Now, we backtrack and start inserting elements in sorted order using sortedInsert.


// Backtrack to 4th Call
// Stack: []
// Element to insert: 8
// Call sortedInsert([] -> 8)
// stk.push(8).
// Resulting stack: [8].

// Backtrack to 3rd Call
// Stack: [8]
// Element to insert: 3
// Call sortedInsert([8] -> 3)
// 3 < 8, pop 8.
// Recursive call with stk = [].
// Base case reached; push(3).
// Push back 8.
// Resulting stack: [3, 8].

// Backtrack to 2nd Call
// Stack: [3, 8]
// Element to insert: 7
// Call sortedInsert([3, 8] -> 7)
// 7 < 8, pop 8.
// Recursive call with stk = [3].
// 7 > 3, push 7.
// Push back 8.
// Resulting stack: [3, 7, 8].

// Backtrack to 1st Call
// Stack: [3, 7, 8]
// Element to insert: 2
// Call sortedInsert([3, 7, 8] -> 2)
// 2 < 8, pop 8.
// Recursive call with stk = [3, 7].
// 2 < 7, pop 7.
// Recursive call with stk = [3].
// 2 < 3, pop 3.
// Recursive call with stk = [].
// Base case reached; push 2.
// Push back 3, 7, 8.
// Resulting stack: [2, 3, 7, 8].
// Final Output
// The stack is now sorted: [2, 3, 7, 8].

// Visualization of Recursive Process
// Step	Action	Stack After Action
// 1	Pop 2, recursive call to sortStack([8, 3, 7])	[8, 3, 7]
// 2	Pop 7, recursive call to sortStack([8, 3])	[8, 3]
// 3	Pop 3, recursive call to sortStack([8])	[8]
// 4	Pop 8, recursive call to sortStack([])	[]
// 5	Base case reached, return.	[]
// 6	Insert 8 using sortedInsert([] -> 8).	[8]
// 7	Insert 3 using sortedInsert([8] -> 3).	[3, 8]
// 8	Insert 7 using sortedInsert([3, 8] -> 7).	[3, 7, 8]
// 9	Insert 2 using sortedInsert([3, 7, 8] -> 2).	[2, 3, 7, 8]
