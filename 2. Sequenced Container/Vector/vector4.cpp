// program to illustrate the use of iterators in a vector
// issue #6

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	
	cin>>n;
	
	vector<int> v;
	vector<int> ::iterator it;//iterator declaration
	
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	// printing using iterator
	for(it=v.begin();it<v.end();it++)
	{
		cout<<*it<<" ";//printing the value in that position
	}
	
	return 0;
	
	
}