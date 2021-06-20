#include <bits/stdc++.h>
#include <deque>// Header file for accessing the standard C++ class of deque 

using namespace std;



std::deque<int> mydeque ;//Declearing the deque


void eraseAt(int x) {// Function erases the element present at position x
	mydeque.erase (mydeque.begin() + x);


}
void eraseinRange(int start, int end) {// Function deletes all the elements in the range of start and end including start and exclusive end
	if (start == end) return;

	mydeque.erase (mydeque.begin() + start +	1 , mydeque.begin() + end + 1 );

}
void eraseAll() {// Erases all the elements present in the deque
	mydeque.erase(mydeque.begin(), mydeque.end());
}
void output() {// This Function prints all the elements present in the deque
	for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
}



int main()
{
	int n; cin >> n;//Taking input of size
	 int x;
	for (int i = 0; i < n ; i++) { // Taking input of Deque
		cin >> x;
		mydeque.push_back(x);
	}
	int start, end; cin >> start >> end;// Taking input of start and end;


	// eraseAt(3);
	// eraseAll();
	eraseinRange(start, end);

	output();


	return 0;
}