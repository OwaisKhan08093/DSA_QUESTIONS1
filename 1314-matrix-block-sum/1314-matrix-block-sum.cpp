class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum=0;
                int r1=max(0,i-k);
                int r2=min(m-1,i+k);
                int c1=max(0,j-k);
                int c2=min(n-1,j+k);
                for(int r=r1;r<=r2;r++){
                    for(int c=c1;c<=c2;c++){
                        sum+=mat[r][c];
                    }
                }
                ans[i][j]=sum;
            }
        }
        return ans;
    }
};