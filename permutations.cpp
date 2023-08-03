/*
 * Leetcode 46: Permutations https://leetcode.com/problems/permutations/.

 * Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
 
 * Constraints:
 *  1 <= nums.length <= 6
 *  -10 <= nums[i] <= 10
 *  All the integers of nums are unique.
 */

#include <iostream>
#include <vector>
#define EMPTY -11 // Chosen due to the constraint on nums[i]

using std::cout;
using std::endl;
using std::vector;

void permuteHelper(vector<int>& nums, int size, int* workingArr, int curIndex,
		   vector<vector<int>> &outVec){
  if(curIndex == size){ // Reached the end of nums, permutation is complete
    /* Range constructor converts array to vector. An array was used instead of
       a vector as a performance optimization, but output expects vectors. */
    vector<int> curVec(workingArr, workingArr + size);
    outVec.push_back(curVec); // Add the completed permutation to the output
    return;
  }
  for(int i = 0; i < size; i++){ // Find an empty spot to place a number in
    if(workingArr[i] == EMPTY){ // Empty spot found
      workingArr[i] = nums[curIndex]; // Place the current number in empty spot
      permuteHelper(nums, size, workingArr, curIndex + 1, outVec); // Recursion
      workingArr[i] = EMPTY; // Backtracking step: clear the spot when done
    }
  }
}

vector<vector<int>> permute(vector<int>& nums) {
  int size = nums.size(); // Performance optimization, avoid repeat calculations
  vector<vector<int>> outVec; // Output array to be passed by reference
  int workingArr[size]; // Working array for constructing permutations
  std::fill(workingArr, workingArr + size, EMPTY); // Initialize workingArr
  permuteHelper(nums, size, workingArr, 0, outVec); // Call recursive helper
  return outVec;
}

void test(vector<int>& nums){
  vector<vector<int>> received_output = permute(nums);

  for (int row = 0; row < received_output.size(); row++){
    cout << "[ ";
    for (int col = 0; col < received_output[row].size(); col++){
      cout << received_output.at(row).at(col) << " ";
    }
    cout << "]";
  }
  cout << endl;
}

int main(){
  // Test cases
  vector<int> tester;

  tester.push_back(1);
  //test(tester);

  tester.push_back(2);
  tester.push_back(3);
  test(tester);

  //tester.clear();
  //tester.push_back(0);
  //tester.push_back(1);
  //test(tester);

  return 0;
}
