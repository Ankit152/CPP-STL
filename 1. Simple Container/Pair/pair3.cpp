// program to make the pair using make_pair function

#include<bits/stdc++.h>
using namespace std;



void makePair(int x,int y)
{
    pair<int,int> p;//pair for storing the values
    
    p=make_pair(x,y);//using the stl function
    
    cout<<"("<<p.first<<","<<p.second<<")\n";//printing the elements of the pair
}

int main()
{
    int t;
    
    cin>>t;
    
    while(t--)
    {
        int x,y;
        
        cin>>x>>y;
        
        makePair(x,y);//calling the function
        
        
    }
    
    return 0;
}