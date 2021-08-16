#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int>& vec) {

  for(int i = 0; i < vec.size(); i++)
    cout << vec[i] << endl;

}

bool is_palindrome(int x) {

  vector<int> digits;
  bool isPalindrome = false;
  while(x > 0) {
    digits.push_back(x % 10);
    x = x/10;
  }

  const uint32_t sz = digits.size();
  for(int i = 0; i < sz; i++)
    if(digits[i] != digits[sz - 1 -i])
      return false;

  return true;

}


int main(int argc, char** argv) {

  cout << is_palindrome(12321) << endl;
  cout << is_palindrome(3443) << endl;
  
}
