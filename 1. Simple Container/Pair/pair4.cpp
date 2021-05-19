//program to pair elements such that st element will be paired with last element,
// 2nd element with 2nd last, 3rd element with 3rd last and so on.
//If the array is of odd size then make middle element as a pair with itself.

//issue #2

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
        
        int arr[N];
        //Entering the elements of the array 
        
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            
        }
        
        int total=0;
        
        if(N%2==0)    //calculating the total no. of pairs to be made
        total=N/2;
        else
        total=N/2 +1;
        
        pair<int,int> p[total];// pair for storing the pair of no.s
        
        for(int i=0;i<total;i++)//storing the values
        {
            p[i].first=arr[i];//first element of the pair
            
            p[i].second=arr[N-i-1];//second element of the pair
        }
        
        
        for(int i=0;i<total;i++)
        {
            cout<<"("<<p[i].first<<","<<p[i].second<<") ";//printing the elemnts
        }
        
        cout<<"\n";//breaking the line
        
        
    }

	return 0;
}