#include<iostream>  
#include<deque> //Header file for accessing built-in functions of class 'deque'.
using namespace std;
void deletion(deque <int> q,int size){  //Function defintion for deletion of the element. 
    char ch;
    q.pop_front();  //Deleting(popping) the first element of the deque.
    size--;
    if(q.empty()){  //Checking whether the deque is empty or not.
        cout<<"\nDeque is empty";
        return ;
    }
    cout<<"\nDeque after deletion is "; //Printing after each deletion process.
    for(int i=0;i<size;i++)
        cout<<q[i]<<" ";
    cout<<"\nDo you want to delete one more element(y/n)? ";    //Giving users the choice if they want to delete more elements.
    cin>>ch;
    if(ch == 'Y' || ch == 'y')
        deletion(q,size);
    else if(ch == 'N' || ch == 'n')
        return ;
    else 
        cout<<"\nPlease enter a valid choice: ";
}
int main(){ //Main Function
    deque <int> q;  //Declaring object 'q' under the 'deque' class.
    int ele;
    cout<<"\nEnter the elements for the queue: ";   //Taking input from the user in a deque.
    for(int i=0;i<5;i++){
        cin>>ele;
        q.push_back(ele);   //Calling standard function to input(push) elements in the deque.
    }
    deletion(q,5);  //Calling deletion function.
    return 0;
}
