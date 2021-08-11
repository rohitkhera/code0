#include <iostream>
#include <string>

using namespace std;

string compress(string str) {

  uint32_t len = str.length();

  if(str.length() <= 2)
    return("error");

  char lastchar = str[0];
  int count = 1;
  int index = 0;
  string newStr(len,'x');

  for(int i = 1; i < len; i++) {

    if(lastchar == str[i]) {
      count++;
      cout << "lastchar " << lastchar << " i = " << i << " count is " << count << endl;

    }
    else if(count > 1) {
      newStr[index] = lastchar;
      index++;
      newStr[index] = count;
      index++;
      count = 1;
      lastchar = str[i];
    }
    else {
      newStr[index] = str[i];
      index++;
    }

  }

  return newStr;
}

/*
int main(int argc, char** argv) {

  string s0 = compress("aabc"); //2ab
  string s1 = compress("aabb"); //2a2b
  cout << s0 << endl;
  cout << s1 << endl;
  return 0;

}
*/
  

