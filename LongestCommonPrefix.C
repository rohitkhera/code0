#include <iostream>
#include <vector>
#include <string>


using namespace std;


string longestCommonPrefix(vector<string>& strs) {

  string prefix;
  int small_len = strs[0].length();
  const int sz = strs.size();
  for(string str: strs) {
    if(str.length() < small_len)
      small_len = str.length();
    
  }
  return prefix;

}



int main(int argc, char** argv) {

  vector<string> strs;
  strs.push_back("flower");
  strs.push_back("flow");
  strs.push_back("flight");

}
