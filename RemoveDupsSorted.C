#include <iostream>
#include <vector>

using namespace std;

// 1 1 1 2 2 

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


class Solution2 {
 public:
  vector<int>  removeDuplicates(vector<int>& nums) {

    vector<int> dedup;
    int i = 0;
    while(i < nums.size() - 1) {
      dedup.push_back(nums[i]);
      cout << "i top " << i << endl;
      bool signal = false;
      for(int j = i + 1; j < nums.size(); j++) {
	if(signal)
	  break;
	if(nums[i] != nums[j]) {
	  i = j;
	  signal = true;
	}
      }
      ++i;
    }
    return dedup;
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
  Solution2 s;
  vector<int> dedup = s.removeDuplicates(nums);
  print(dedup);

  
  return 0;

}
