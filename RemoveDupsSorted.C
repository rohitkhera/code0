#include <iostream>
#include <vector>

using namespace std;

// 1 1 1 2 3 

void move_array(int a, int b, vector<int>& nums) {

  while(b < nums.size()) {
    nums[a+1] = nums[b];
    a++;
    b++;

  }
}

void print(vector<int>& nums) {

  for(int i = 0; i < nums.size(); i++)
    cout << nums[i] << endl;
  
}

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

      int index = 0, j = 0;
      for(int i = 0; i < nums.size() - 1; i++) {

	for(j = i + 1; j < nums.size(); j++) {
	  if(nums[j] != nums[i])
	    break;
	}
	if(j > i + 1)
	  move_array(i,j,nums);

      }

      return 0;
    }

};

int main(int argc, char **argv) {


  vector<int> nums;
  nums.push_back(1);
  nums.push_back(1);
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(2);  
  nums.push_back(3);
  nums.push_back(3);

  print(nums);
  cout << endl;
  Solution s;
  s.removeDuplicates(nums);
  print(nums);
  
  return 0;

}
