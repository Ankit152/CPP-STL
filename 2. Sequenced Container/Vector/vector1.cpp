//implementation of vector
#include<iostream>
#include<vector>        //header file for vector
using namespace std;
int main(){
    vector<int> v;    //declaration of vector of type int
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    cout<<v.size()<<"\n";   //size of the vector
    cout<<v.capacity()<<"\n";  //capacity of the vector
    cout<<v.front()<<" "<<v.back()<<"\n";  //front and back element of the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(50);
    v.push_back(15);
    cout<<v.front()<<" "<<v.back()<<"\n";  //front and back element of the vector
    cout<<v.size()<<"\n";
    v.pop_back();           //removing the back most element from the vector
    cout<<v.back()<<"\n";
    cout<<v.size()<<"\n";
    return 0;
}
