//this program sorts one array according to another array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;// number of elements of the arrays
    
    cout<<"Enter the number of elements of the array---";
    cin>>n;
    
    cout<<"Enter the two arrays";
    
    int ar[n];char ch[n];// one integer array and one character array
    
    pair<int,char> final[n];//the pair where the array elements will be stored
    
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        
        final[i].first=ar[i];//assigning values to the pair
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
        
        final[i].second=ch[i];//assigning values to the pair
    }
    
    sort(final,final+n); //sorting the second array according to the first one 
    
    //printing the sorted array
    
    //the second array is sorted according to the first
    cout<<"\n";
    
    for(int i=0;i<n;i++)
    {
        cout<<final[i].first<<" ";
    }
    
    cout<<"\n"; //breaking one line 
    
    
    for(int i=0;i<n;i++)
    {
        cout<<final[i].second<<" ";
    }
    
    return 0;
}
