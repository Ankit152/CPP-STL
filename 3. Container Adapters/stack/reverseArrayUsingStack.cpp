// Reversing and Array Using Stack
#include <iostream>
#include <stack>    // Header file for Stack

using namespace std;

int main()
{
    stack<int> st;  // Declaration of Stack
    int N;
    cout<<"Enter the size of Array : ";
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];    // Accepting array elements
        st.push(arr[i]);    // Pushing array elements in Stack
    }

    cout<<"\nReversed Array is : "<<endl;

    for(int i=0;i<N;i++)
    {
        arr[i] = st.top();  // top() function returns the top element and assigning it to the array element
        st.pop();   // pop() function removes the top element
        cout<<arr[i]<<" ";  // Displaying array elements in reversed order
    }

}