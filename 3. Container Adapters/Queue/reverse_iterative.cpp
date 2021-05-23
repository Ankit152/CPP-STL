// Reverse a queue (Iterative)
#include<iostream>
#include<queue>         // Header file of queue
#include<stack>         // Header file of stack
using namespace std;

/* A very simple solution is to use an auxiliary stack to reverse the elements 
   of the queue. We simply push all the elements to a stack. And then will pop the
   elements from the stack and push it back to the queue. This approach works as we
   know elements comes out in the reverse order in a stack when we pop the items.
*/

void reverse_iterative(queue <int> &q){
    stack <int> s;
    while(!q.empty()){
        s.push(q.front());      
        q.pop(); 
        // Here we remove the elements from the queue and push them into the stack                 
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
        // Here we remove the elements from the stack and push them back into the queue.
        // In reverse order
    }
}

int main(){
    queue <int> q;
    queue <int> temp;
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(0);
    q.push(1);
    // Example queue - {2,4,5,0,1}
    temp = q;
    cout<<"Original queue : ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
    q = temp;
    reverse_iterative(q);       // Calling the iterative function
    cout<<"Reversed queue : ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
