#include <iostream>
#include <vector>

using namespace std;

int reverseInt(int i) {

  vector<int> vec;
  unsigned int reversed =0;
  while(i % 10) {
    vec.push_back(i % 10);
    i = i/10;
  }

  int sigdigits = vec.size() - 1;
  cout << "sigdigits is " << sigdigits << endl;
  for(int i = 0; i < vec.size(); i++) {
    cout << vec[i] << endl;
    cout << "intermediate step is " << vec[i] * (10^sigdigits) << endl;
    reversed = reversed + (vec[i] * (10^sigdigits));
    sigdigits--;
  }
  
  return reversed;
}



int main(int argc, char** argv) {

  cout << reverseInt(1234) << endl;

}
