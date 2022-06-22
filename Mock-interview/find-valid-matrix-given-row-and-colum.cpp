class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {

        int r=rowSum.size();
        int c=colSum.size();
        vector<vector<int>> ans(r,vector<int>(c,0));

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int x=min(rowSum[i],colSum[j]);
                ans[i][j]=x;
                rowSum[i]-=x;
                colSum[j]-=x;
            }
        }
        return ans;
    }
};
