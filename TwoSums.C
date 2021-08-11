#include <iostream>
#include <vector>
using namespace std;

vector<int> twosums(vector<int>& list, int target) {

  vector<int> indices;
  int len = list.size();

  for(int i = 0; i < len - 1; i++) {
    for(int j = i+1; j < len; j++) {
      if(list[i] + list[j] == target) {
	  indices.push_back(i);
	  indices.push_back(j);
	  return indices;
      }
    }
  }
  indices.push_back(-1);
  indices.push_back(-1);
  return indices;
}


int main(int argc, char** argv) {

  vector<int> nums; // [2,7,11,15]
  nums.push_back(2);
  nums.push_back(7);
  nums.push_back(11);
  nums.push_back(15);
  vector<int> result = twosums(nums,26); 

  cout << "indices are " << result[0] << " and " << result[1] << endl;

}
