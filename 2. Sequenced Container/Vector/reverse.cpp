#include <iostream>
#include <vector> //header file of vector
using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6}; //declaration of the vector

    int n = v.size();

    //reversing the vector
    for (int i = 0; i < n / 2; i++)
    {
        swap(v[i], v[n - i - 1]);
    }

    //printing the revesed vector
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
