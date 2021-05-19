#include<iostream> // For accessing the standard input/output classes of C++.
#include<deque> // Header file for accessing the standard C++ class of deque and the built-in functions associated with it. 
using namespace std;
void pushindeque(int arr[], int n){ //Function definition for pushing the elements in the deque.
    deque <int> q;  // Declaration of object 'q' of class 'deque'.
    for(int i=0;i<n;i++)    // Pushing elements in the deque.
        q.push_back(arr[i]);
    for(int i=0;i<n;i++)    //Printing the deque.
        cout<<q[i]<<" ";
}
int main(){ //Main function to input the number of elements and the elements to store them in an array. 
    int n;
    cin>>n; //
    int arr[n];
    for(int i=0;i<n;i++)    //Storing the elements in an array. 
        cin>>arr[i];
    pushindeque(arr,n); //Function call 
   return 0;
}
