// Find sum of elements of a vector
#include<iostream>
#include<vector>        // header file of vector
#include<numeric>       // header for using 'accumulate' function to find sum 
using namespace std;

int main(){
    vector <int> v{3,1,8,4,-9,11,-1,-2};   // declaration and assignment
    
    // Method 1 - using a variable to store the sum
    int sum1 = 0;        // This variable will store the sum

    for(int i = 0; i < v.size(); i++){
        sum1 += v[i];    // adding the elements in the 'sum1' variable
    }

    // Method 2 - using STL function
    int sum2 = 0;       // This variable will store the sum

    sum2 = accumulate(v.begin(),v.end(),0);
    /* accumulate() function gives the sum of the elements of the vector
       in the given range */

    cout<<"Sum without using STL function : "<<sum1<<"\n";
    cout<<"Sum using STL function : "<<sum2<<"\n"; 
}

