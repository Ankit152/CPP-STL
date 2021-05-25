// lower_bound() function
#include<iostream>
#include<vector>            // Header file of vector
#include<algorithm>         // Header file of algorithms
using namespace std;

/*  Working of lower_bound() :-
        -> It takes 3 arguments.
        -> lower_bound(starting iterator,ending iterator,value).
        -> It returns an iterator.
        -> It works in a SORTED data structure. 
        -> It internally uses Binary Search.        
        OUTPUT :-
            -> If the value given is present in the sorted data structure,
               then it will return iterator to that value in the data structure.
               If there are more than one element which is equal to given value
               then it return iterator to the first occurence of the value.
            -> If the value given is not present in the sorted data structure,
               then it will return iterator to the next greater element of the
               given value in the data structure.
            -> And if the next greater element doesn't exist,then it returns 
               iterator to the address just after the last element of the
               data structure.
            -> If all the values in the data structure is greater than the input
               value, then it returns iterator to first element.
        
        USE : It can be used to find the number of elements smaller than a
              given value in a sorted data structure.                  
*/

int main(){
    vector <int> v;                     // Declaration of vector
    // Sorted vector 
    v = {3,6,9,10,11,15,17,19,25};      // Assignment
    
    // Declaration of iterator to store the iterator returned by the function  
    vector <int> :: iterator it1;
    it1 = lower_bound(v.begin(),v.end(),12);
    /* 12 is not present in the vector, so it1 returns iterator to the 
       next greater element in the vector, i.e. 15*/ 
    cout<<"Lower bound of 12 is "<<*it1<<"\n";
    cout<<"No of elements smaller than 12 is "<<(it1-v.begin())<<"\n\n";

    // Declaration of iterator to store the iterator returned by the function
    vector <int> :: iterator it2;  
    it2 = lower_bound(v.begin(),v.end(),19);
    // 19 is present in the vector, so it will return iterator to the element 19
    cout<<"Lower bound of 19 is "<<*it2<<"\n";
    cout<<"No of elements smaller than 19 is "<<(it2-v.begin())<<"\n";
}