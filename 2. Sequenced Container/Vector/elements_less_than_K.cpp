/* Given a vector of elements and a number K. We need to return a vector
   containing the elements less than K in the same order */
#include<iostream>
#include<vector>        // Header file of vector
using namespace std;

vector <int> LessThanK(vector <int> &input,int k){
    vector <int> ans;       // this vector is returned
    for(int i = 0; i < input.size(); i++){
        if(input[i] < k)    // condition given as per question
            ans.push_back(input[i]);
            // inserting elements less than 'k'
    }           
    return ans;
}

int main(){
    int n = 5;              // Size of vector
    vector <int> v(n);      // declaration
    v = {5,3,6,1,3};        // assignment
    int k = 5;              // value of 'k'
    vector <int> ans;       // Stores the returned value by the function
    ans = LessThanK(v,k);   // Function call
    cout<<"Elements less than "<<k<<" are : ";
    for(int x : ans)        // for each loop
        cout<<x<<" ";
}
