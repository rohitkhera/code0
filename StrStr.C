#include <iostream>

using namespace std;

class Solution
{

 public:
  int strstr(string haystack, string needle)
  {

    int j = 0;
    for(int i = 0; i < haystack.length(); i++)
      {
	for(j = 0; j < needle.length(); j++)
	  {
	    if(haystack[i + j] != needle[j])
	      break;
	  }

	if(j == needle.length() - 1)
	  return i;
      }

  return -1;

  }

};

int main(int argc, char **argv)
{

  Solution s;

  cout << "Index is " << s.strstr("hello", "ll") << endl;


}
