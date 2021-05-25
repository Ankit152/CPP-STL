
//Sort vector of pairs

// sorting in descending order
// Issue #21
// file name vectorpairsort.cpp

#include<bits/stdc++.h>
using namespace std;

// we are using a sort comparator function to modify the sorting 
// we are sorting descending by the second element but if they are equal
// sorting happens according to the first element

bool comp_func(const pair<int,int> &a,const pair<int,int> &b) // the comparator function to modify the sort
{
    
    // at first we check whether the second elements of the pair are equal or not
    // if they are equal we sort by comparing the first elements
    
    if(b.second==a.second)
    return(a.first>b.first);  // comparing by first element in case of a tie
    else
    return(a.second>b.second); // comparing by second element
}


int main()
{
  int t;// number of testcases
  
  cin>>t;
  
  while(t--)
  {
      int n;//no. of vectors
      
      cin>>n;
      
      vector<pair<int,int>> vec;//creating vector of pairs
      
      for(int i=0;i<n;i++)
      {
          
          
          
          int a,b;// temporary variables to take input
          cin>>a>>b;
          
          vec.push_back(make_pair(a,b));// assigning the values using the make_pair function
          
          
      }
      
      sort(vec.begin(),vec.end(),comp_func);// using a modified sort function
      // by adding a comparator
      
      // sorting in descending order
      
      for(int i=0;i<n;i++)// printing the elements after sorting
      {
          cout<<"("<<vec[i].first<<","<<vec[i].second<<") ";
      }
      
      cout<<"\n";
      
      vec.clear();//clearing the vector
      
  }
  return 0;
}