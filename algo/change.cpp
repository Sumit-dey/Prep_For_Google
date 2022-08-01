#include <vector>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
  int ans=0;
  sort(coins.begin(),coins.end());
  for(int i=0;i<coins.size();i++){
    if(coins[i]>ans+1)
      return ans+1;

    ans+= coins[i];
  }
  return ans+1;
}
