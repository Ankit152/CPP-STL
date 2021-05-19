// program to insert elements to a forward list
// issue #22
// basically the array of elements taken input are printed in reversed order
 
//Every time the new input is pushed to the front, so the last input eventually
//  becomes the first element and so on
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;// testcases
    
    cin>>t;
    
    
    while(t--)
    {
        int n;  // Number of elements to be entered
        
        cin>>n;
        
        
        forward_list<int> flist; // declaration of a Forward List
        
        
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            
            flist.push_front(temp);  //pushing the input to the front
            
        }
        
        for(int&a : flist)
        {
            cout<<a<<" ";  //printing the values
        }
        
        
        cout<<"\n";// breaking the line
        
        
    }
    
    return 0;
    
}