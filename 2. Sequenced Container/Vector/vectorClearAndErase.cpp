/*
      ++++++++++++++++++++++++++++++++++++++++++++++++++
      +  code author - Anurag Chakraborty              +
      +  email       - chakraborty.anurag01@gmail.com  +
      ++++++++++++++++++++++++++++++++++++++++++++++++++
*/

#include <bits/stdc++.h>

using namespace std;

vector < int > myvector {
  1,
  2,
  3,
  4,
  5
};

void clearAll() { // clearAll(): This function removes all elements from vector.
  myvector.clear();
}

void eraseAt(int pos) { // eraseAt(): This function removes element from specified position present in the vector.
  myvector.erase(myvector.begin() + (pos - 1));
}

void eraseInRange(int start, int end) {
  // eraseInRange(): This function removes element from vector in the given range start & end (inclusive).
  if (start == end || start > myvector.size() || end > myvector.size()) {
    cout << "The following operation could not be performed!  \nReturning original Vector - \n";
    return;
  }

  auto first = myvector.cbegin() + start - 1;
  auto last = myvector.cbegin() + end;

  myvector.erase(first, last);

}

void output() {
  // output(): Prints out the vector.
  for (auto it = myvector.begin(); it != myvector.end(); ++it)
    cout << ' ' << * it;
}

int main() {

  // clearAll();
  // eraseAt(int);
  // eraseInRange(int,int);
  // output();

  return 0;
}