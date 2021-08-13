#include <iostream>
#include <vector>
#include <cmath>
#include <climits>


using namespace std;

bool uoflow_detected(int lhs, int rhs) {

  if(INT_MAX - lhs <= rhs)
    return true;
  if(INT_MIN - lhs >= rhs)
    return true;

  return false;
}


int reverseInt(int i) {

  vector<int> vec;
  int reversed = 0;

  while(i % 10) {
    vec.push_back(i % 10);
    i = i/10;
  }

  int sigdigits = vec.size() - 1;

  for(int i = 0; i < vec.size(); i++) {

    int newTerm = (vec[i] * pow(10,sigdigits));
    if(!uoflow_detected(reversed, newTerm)) {
      reversed = reversed + newTerm;
      sigdigits--;
    }
    else
      return reversed;
  }
  
  return reversed;

}

/*

int main(int argc, char** argv) {

  cout << reverseInt(1234) << endl;

}

*/
