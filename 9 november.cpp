class Solution{
    public:
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int maximum = 0, col = -1;

        for(int j = 0; j < N; j++) {
            int count = 0;

            for(int i = 0; i < N; i++) 
                if(arr[i][j] == 0)
                    count++;

            if(maximum < count) {
                maximum = count;
                col = j;
            }
        }
        return col;
    }
};
