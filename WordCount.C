#include <iostream>

using namespace std;


typedef enum inout {out = 0, in = 1}
inout;


uint32_t wordCount(string str) {

  uint32_t len = str.length();
  inout marker = in;
  int count = 0;

  for(int i = 0; i < len; i++) {
    cout << "i = " << i << " marker is " << marker << endl;

    if(marker == in && i == len -1) {
      count++;
    }
    else if(str[i] != ' ') {
      marker = in;
    }
    else if(str[i] == ' ' && marker == in) {
      count++;
      marker = out;
    }
    else if(marker == in && i == len - 1) {
      cout << "Here" << endl;
      count++; 
    }
    else
      ;

  }
  
  return count;
}



uint32_t wordCount2(string str) {

  uint32_t len = str.length();
  uint32_t count = 0;
  return count;

}


int main(int argc, char** argv) {

  cout << wordCount("Voila this is a random sample") << endl;

}

