#include <iostream>
#include <vector>

/* using left and right pointers */

using namespace std;

vector<int> twoSumsSorted(vector<int>& nums, int target) {

  vector<int> indices;
  uint32_t len = nums.size();
  
  int r = len - 1;
  int l = 0;

  while(l < r) {
    cout << "l = " << l << " r = " << r << endl;

    if(nums[l] + nums[r] == target) {
      cout << "Here " << endl;
      indices.push_back(l);
      indices.push_back(r);
      return indices;
    }
    else if(nums[l] + nums[r] > target) 
      r--;
    else if(nums[l] + nums[r] < target)
      l++;
    else {
      ;
    }
  
  }

  return indices;
  
}

int main(int argc, char** argv) {

  vector<int> nums; // {-8, 1, 4, 6, 10, 45}
  nums.push_back(-8);
  nums.push_back(1);
  nums.push_back(4);
  nums.push_back(6);
  nums.push_back(10);
  nums.push_back(45);
  vector<int> result = twoSumsSorted(nums,16); 

  cout << "indices are " << result[0] << " and " << result[1] << endl;

}


