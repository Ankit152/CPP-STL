#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,i;
    vector<int> v;
    // array with 1st n no;
    for(i=1;i<=n;i++)
        v.push_back(i);
    //print all permutation 
    do{
        for(auto element:v)
            cout<<element<<" ";
        cout<<"\n";
    }while(next_permutation(v.begin(),v.end()));
    
}
