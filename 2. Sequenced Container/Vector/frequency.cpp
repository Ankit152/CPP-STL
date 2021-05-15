// Find frequency of a given element in a vector
#include<iostream>
#include<vector>   //header file of vector
using namespace std;

int main(){
    vector <int> v{1,1,6,3,1,6,7,7,6}; // declaration and assignment
    int x = 6; // The element whose frequency has to be found

    int count = 0;  // This is keep track of the frequency

    for(int i = 0; i < v.size(); i++){
        if(v[i] == x)
            count ++;   // Increasing the frequency when we find a match
    } 
    
    // Printing the frequency of the element
    cout<<"The frequency of "<<x<<" in the vector is "<<count<<"\n";
}