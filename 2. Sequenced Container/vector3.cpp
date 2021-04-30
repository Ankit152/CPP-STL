//some functions on vectors
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{10,20,5,15,11};
    v.pop_back();       //popping the last element
    cout<<v.back()<<"\n";   //last element of the vector
    cout<<v.size()<<"\n";   //size of the vector

    //display of all the elements of the vector
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;


    v.front()=100;           //replaces the first element by the new
    cout<<v.front()<<"\n";   //front element of the vector
    cout<<v.size()<<"\n";    //size of the vector

    //display of all the elements of the vector
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;


    //insert() : it is used to insert the element at the given position
    v.insert(v.begin(),101);    //inserts at the starting position
    v.insert(v.begin()+2,300);  //inserts at the 2nd index(0 based)
    v.insert(v.begin(),2,200);  //inserts 200 two times at the begining of the vector

    //display of all the elements of the vector
    for(auto x:v){
        cout<<x<<" ";
    }

    return 0;
}
