class Solution {
public:
    double trimMean(vector<int>& arr) {
        double length=((arr.size()+1)/10)/2;
        int len=length;
        sort(arr.begin(),arr.end());
        double sum=0;
        for(int i=len;i<arr.size()-len;i++){
            sum+=arr[i];
        }
        double ans=sum/(arr.size()-(length*2));
        return ans;

    }
};
