#include <iostream>


void printVec(vector<int> vec) {

  for(int i : vec)
    cout << i << endl;
}

bool is_palindrome(int x) {

  vector<int> reversed;

  while(x % 10) {
    reversed.push_back(x % 10);
    x /= 10;
  }

  printVec(vec);
}


int main(int argc, char** argv) {

  cout << is_palindrome(1234);

}
