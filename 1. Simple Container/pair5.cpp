//program to pair elements of two arrays 
//corresponding pairs, issue #3


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int N;
        
        cin>>N;
        
        pair<int,int> p[N];//pair to store the numbers
        
        for(int i=0;i<N;i++)
        {
            cin>>p[i].first;//taking first array input
        }
        
        for(int i=0;i<N;i++)
        {
            cin>>p[i].second;//taking second array input
        }
        
        for(int i=0;i<N;i++)
        {
            cout<<"("<<p[i].first<<","<<p[i].second<<") ";//printing the elemnts
        }
        
        cout<<"\n";//breaking the line
        
        
    }

	return 0;
}