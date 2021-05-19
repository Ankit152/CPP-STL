// Sort and reverse a given vector using STL algorithms
#include<iostream>
#include<vector>        // Header file for vector
#include<algorithm>    //  Header file for algorithms (for sort() & reverse())
using namespace std;

int main(){
    int n = 10;                                    // size of the vector
    vector <int> v(n);                            //  declaration
    v = {3,7,1,5,5,2,9,8,8,2};                   //   assignment 

    // sort() function - takes range in form of iterators
    sort(v.begin(),v.end());       // Sorts the vector in the given range

    // printing sorted vector
    cout<<"Sorted Vector : ";
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";

    // reverse() function - takes range in form of iterators
    reverse(v.begin(),v.end());    // Reverses the vector in the given range

    // printing reversed vector
    cout<<"Reversed Vector : ";
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";

}