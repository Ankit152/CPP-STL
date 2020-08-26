//this programs the application of vector and pair
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}
int main(){
    int n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n],b[n];              //array of size n
    cout<<"\nEnter the elements of the first array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nEnter the elements of the second array: ";
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    pair<int,int> v[n];   //array of pair of size n
    for(i=0;i<n;i++){
        v[i].first=a[i];
        v[i].second=b[i];
    }
    sort(v,v+n,cmp);
    cout<<"\nThe array elements after pair wise sorting are:\n";
    for(i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    return 0;
}
