#include <iostream>
#include <vector>

using namespace std;

bool isValid(string s) {

  bool valid = false;
  const unsigned int len = s.length();
  vector<char> stack;
  char last_open;
  
  for(int i = 0; i < len; i++) {
    if(s[i] == '{' || s[i] == '(' || s[i] == '[') {
      stack.push_back(s[i]);
      last_open = s[i];
    }
    else if(s[i] == '}' || s[i] == ')' || s[i] == ']') {
      if(stack.pop_back() != s[i])
	return false;
    }

  }
  
  return valid;
  
}


int main(int argc, char** argv) {

  cout << "Is valid " << isValid("{ ( [ ] ) } ()") << endl;

}
