#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{10,2,5};  //declaration and assignment

    //intialising an vector having all the array element
    int arr[]={1,2,5,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n);

    //traversing the vector
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    //another way to traverse
    for(auto it=a.begin();it!=a.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    //traversing like an array
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

