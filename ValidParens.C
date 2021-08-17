#include <iostream>
#include <vector>

using namespace std;

bool isValid(string s) {

  const unsigned int len = s.length();
  vector<char> stack;
  
  for(int i = 0; i < len; i++) {
    if(s[i] == '{' || s[i] == '(' || s[i] == '[') {
      stack.push_back(s[i]);
    }
    else if(s[i] == '}' || s[i] == ')' || s[i] == ']') {

      if(stack.size() == 0)
	return false;
      char c = stack.back();
      switch(s[i]) {
      case ')':
	if(c != '(')
	  return false;
	break;
      case '}':
	if(c != '{')
	  return false;
	break;
      case ']':
	if(c != '[')
	  return false;
	break;
      default:
	break;
      }

      stack.pop_back();
    }

  }
  
  return stack.size() == 0;
}

/*
int main(int argc, char** argv) {

  cout << "Is valid " << isValid("{ ( [ ] ) ) ()") << endl;
  cout << "Is valid " << isValid("{ ( [ ] ) } ()") << endl;
  cout << "Is valid " << isValid("]") << endl;

}
*/
