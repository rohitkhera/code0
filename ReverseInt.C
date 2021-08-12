#include <iostream>
#include <vector>

using namespace std;


int reverseInt(int i) {

  vector<int> vec;
  int reversed;
  while(i/10) {
    vec.push_back(i % 10);
    i = i/10;
    cout << " i = " << i << endl;
  }

  return reversed;
}



int main(int argc, char** argv) {

  int i = 1234;
  reverseInt(i);

}
