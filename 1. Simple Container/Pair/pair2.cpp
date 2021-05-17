//this program sorts one array according to another array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;// number of elements of the arrays
    
    cout<<"Enter the number of elements of the pair---\n";
    cin>>n;
    
    
    
    cout<<"Enter the two arrays as pair---\n";
    
    
    
    
    
    pair<int,char> final[n];//the pair where the array elements will be stored
    
    for(int i=0;i<n;i++)
    {
        cin>>final[i].first;//first series of elements taken input
        
        
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>final[i].second; //first series of elements taken input
        
        
    }
    
    sort(final,final+n); //sorting the second array according to the first one 
    
    //printing the sorted pair
    
    //the second array is sorted according to the first
    
    
    
    cout<<"\n"; //breaking one line 
    
    
    for(int i=0;i<n;i++)
    {
        cout<<final[i].second<<" ";
    }
    
    return 0;
}
