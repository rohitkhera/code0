#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int reverseInt(int i) {

  vector<int> vec;
  int reversed = 0;

  while(i % 10) {
    vec.push_back(i % 10);
    i = i/10;
  }

  int sigdigits = vec.size() - 1;

  for(int i = 0; i < vec.size(); i++) {
    reversed = reversed + (vec[i] * pow(10,sigdigits));
    sigdigits--;
  }
  
  return reversed;

}



int main(int argc, char** argv) {

  cout << reverseInt(1234) << endl;

}
