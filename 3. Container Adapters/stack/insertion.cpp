// Insertion operation in a stack
#include<iostream>
#include<stack>         // header file for stack
using namespace std;

int main(){
    stack <int> s;      // declaration of stack

    // push() function is used for insertion of element in a stack
    s.push(3);
    s.push(1);
    s.push(9);
    s.push(3);

    // printing the elements
    while(!s.empty()){            // empty() function returns true if stack is empty
        cout<<s.top()<<" ";      // top() function returns the top element
        s.pop();                // pop() function removes the top element
    }
}