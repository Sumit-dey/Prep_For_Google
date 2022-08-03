// Write a function that takes in a non-empty array of arbitrary intervals, merges any overlapping intervals,
// and returns the new intervals in no particular order.

// Each interval interval is an array of two integers, with interval[0] as the start of the interval and
// interval[1] as the end of the interval.
// Note that back-to-back intervals aren't considered to be overlapping. For example, [1, 5] and
// [6, 7] aren't overlapping; however, [1, 6] and [6, 7] are indeed overlapping.
// Also note that the start of any particular interval will always be less than or equal to the end of that
// interval.

// Sample Input
// intervals = [[1, 2], [3, 5], [4, 7], [6, 8], [9, 10]]

// Sample Output
// [[1, 2], [3, 8], [9, 10]]

// Merge the intervals [3, 5], [4, 7], and [6, 8].
// The intervals could be ordered differently.

#include <vector>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> intervals) {
  // Write your code here.
  vector<vector<int>> ans;
  sort(intervals.begin(),intervals.end());

  int index=0;
  ans={{intervals[0][0],intervals[0][1]}};

  for(int i=1;i<intervals.size();i++){
    if(ans[index][1]>= intervals[i][0]){
      ans[index]={ans[index][0],max(ans[index][1],intervals[i][1])};
    }
    else{
      index++;
      ans.push_back({intervals[i][0],intervals[i][1]});
    }
  }
  return ans;
}
