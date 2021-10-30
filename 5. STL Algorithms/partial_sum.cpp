#include <iostream> 
#include <numeric>     
using namespace std;
  
//user defined function
int myfun(int x, int y)
{
    // the sum of element is twice of its adjacent element
    return x+2*y;
}
  
int main () 
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    int b[n];
    // Default function
    partial_sum(a , a+n , b);
    cout << "Partial Sum - Using Default function: ";
    for (int i=0; i<n; i++)
        cout << b[i] << ' ';
    cout << '\n';
    // Using user defined function
    partial_sum(a , a+n , b , myfun) ;
    cout << "Partial sum - Using user defined function: ";
    for (int i=0; i<n; i++)
        cout << b[i] << ' ';
    cout << '\n';
    return 0;
}
