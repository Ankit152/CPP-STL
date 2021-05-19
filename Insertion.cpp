#include<iostream> 
#include<deque>
using namespace std;
void pushindeque(int arr[], int n){
    deque <int> q;
    for(int i=0;i<n;i++)
        q.push_back(arr[i]);
    for(int i=0;i<n;i++)
        cout<<q[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    pushindeque(arr,n);
   return 0;
}
