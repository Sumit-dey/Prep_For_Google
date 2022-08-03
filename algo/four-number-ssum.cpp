// Write a function that takes in a non-empty array of distinct integers and an integer representing a target
// sum. The function should find all quadruplets in the array that sum up to the target sum and return a twodimensional array of all these quadruplets in no particular order.
// If no four numbers sum up to the target sum, the function should return an empty array.

// Sample Input
// array = [7, 6, 4, -1, 1, 2]
// targetSum = 16

// Sample Output
// [[7, 6, 4, -1], [7, 6, 1, 2]] // the quadruplets could be ordered differently


#include <vector>
using namespace std;

vector<vector<int>> fourNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(),array.end());
  vector<vector<int>> ans;
  int len=array.size();

  for(int i=0;i<len-2;i++){
    for(int j=i+1;j<len-1;j++){
        int l=j+1;
        int r=len-1;
        while(l<r){
          int sum=array[i]+array[j]+array[r]+array[l];
          if(sum==targetSum){
            ans.push_back({array[i],array[j],array[l++],array[r--]});
          }
           else if(sum<targetSum){
            l++;
          }
          else{
            r--;
          }
        }
    }
  }
  return ans;
}
