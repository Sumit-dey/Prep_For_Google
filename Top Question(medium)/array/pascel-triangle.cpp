
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v={1};
        ans.push_back(v);
        if(numRows==1)return ans;

        for(int i=1;i<numRows;i++){
            vector<int> vv;
            int ele=i+1;
            vv.push_back(1);
            int j=0;
            while(ele>2){
                vv.push_back(ans[i-1][j]+ans[i-1][j+1]);
                j++;
                ele--;
            }
            vv.push_back(1);
            ans.push_back(vv);
        }
        return ans;
    }
};
