// Insert elements from an array to a vector
#include<iostream>
#include<vector>      // header file of vector
using namespace std;

int main(){
    int n = 5;                  // size of the array
    int arr[n] = {2,1,5,4,7};   // array with 'n' elements

    vector <int> v;             // Declaration of vector

    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);    // Inserting the elements in the vector 
    }

    // printing the elements of the vector
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }  
    cout<<"\n";
}
