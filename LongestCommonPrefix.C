#include <iostream>
#include <vector>
#include <string>


using namespace std;


string longestCommonPrefix(vector<string>& strs) {

  string prefix = "";
  int small_len = strs[0].length();
  const int sz = strs.size();

  for(int i = 0; i < strs.size(); i++) {
    if(strs[i].length() < small_len)
      small_len = strs[i].length();
    
  }

  bool diff = false;
  for(int i = 0; i < small_len; i++) {

    char current = strs[0][i];
    for(int j = 0; j < sz; j++) {
      if(strs[j][i] != current)
	diff = true;
    }
    if(diff)
      break;

    prefix += current;
  }
  
  return prefix;
}


/*
int main(int argc, char** argv) {

  vector<string> strs;
  strs.push_back("flower");
  strs.push_back("flow");
  strs.push_back("flight");
  cout << longestCommonPrefix(strs) << endl;
  
}
*/
