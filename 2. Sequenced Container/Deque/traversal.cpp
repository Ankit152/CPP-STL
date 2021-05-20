// Deque Traversal
#include<iostream>
#include<deque>         // Header file of Deque
using namespace std;

int main(){
    int n = 6;              // Size of Deque
    deque <int> deq(n);     // Declaration
    deq = {3,1,27,63,9,0};  // Assignment

    // Traversal using iterator
    deque <int> :: iterator it;         // We can also declare it as - auto it;
    cout<<"Elements of deque are : ";
    for(it = deq.begin(); it != deq.end(); it++)
        cout<<(*it)<<" ";
    cout<<"\n";
}