class Solution
{   
    public:
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int d_sum=0, u_sum=0;
        // upper triangle sum
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++) u_sum+=matrix[i][j];
        }
        // lower triangle sum
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++) d_sum+=matrix[i][j];
        }
        return {u_sum, d_sum};
    }
};
