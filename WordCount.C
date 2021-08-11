#include <iostream>

using namespace std;


typedef enum state {out = 0, in = 1} state;

uint32_t wordCount(string str) {

  uint32_t len = str.length();
  state st = in;
  int count = 0;

  for(int i = 0; i < len; i++) {
    cout << "i = " << i << " st is " << st << endl;

    if(st == in && i == len -1) {
      count++;
    }
    else if(str[i] != ' ') {
      st = in;
    }
    else if(str[i] == ' ' && st == in) {
      count++;
      st = out;
    }
    else if(st == in && i == len - 1) {
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

  state st = out;
  for(int i = 0; i < len; i++) {
    if(str[i] != ' ' && st == out) {
      st = in;
      count++;
    }
    else {
      st = out;
    }
  }

  return count;

}


int main(int argc, char** argv) {

  cout << wordCount("Voila this is a random sample") << endl;

}

