class Solution{
    public:
    vector<int> generateRow(int row){
        long long ans =1;
        vector<vector<int>> ansRow;
        ansRow.push_back(1);
        // Use recurrence: 
        for(int col=1; col<=row;col++){
            ans = ans*(row-col);
            ans = ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    // Generate first N rows of Pascal's triangle.
    // Note: current loop starts from i=1 to N-1, adjust as needed for desired indexing.
    vector<vector<int>> generate(int N){
        vector<vector<int>> ans;
        for(int i=1;i<N;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};