// upper_bound() function
#include<iostream>
#include<vector>            // Header file of vector
#include<algorithm>         // Header file of algorithms
using namespace std;

/*  Working of upper_bound() :-
        -> It takes 3 arguments.
        -> upper_bound(starting iterator,ending iterator,value).
        -> It returns an iterator.
        -> It works in a SORTED data structure. 
        -> It internally uses Binary Search.        
        OUTPUT :-
            -> This always returns iterator to an element greater than the given 
               value, even if the given value exists in the sorted data structure.
            -> If there is no element in the data structure whose value is strictly
               greater than the input value,then iterator to the end is returned.  
            -> If all the values in the data structure is greater than the input
               value, then it returns iterator to first element.                 
*/

int main(){
    vector <int> v;                     // Declaration of vector
    // Sorted vector 
    v = {3,6,9,10,11,15,17,19,25};      // Assignment
    
    // Declaration of iterator to store the iterator returned by the function  
    vector <int> :: iterator it1;
    it1 = upper_bound(v.begin(),v.end(),12);
    /* The element strictly greater than 12 is returned, i.e. 15 */ 
    cout<<"Upper bound of 12 is "<<*it1<<"\n\n";

    // Declaration of iterator to store the iterator returned by the function
    vector <int> :: iterator it2;  
    it2 = upper_bound(v.begin(),v.end(),19);
    /* The element strictly greater than 19 is returned, i.e 25. Even though
       19 is present in the vector, but still the iterator to the next greater
       element is returned. This is the main difference between lower_bound()
       and upper_bound()
    */  
    cout<<"Upper bound of 19 is "<<*it2<<"\n";
}