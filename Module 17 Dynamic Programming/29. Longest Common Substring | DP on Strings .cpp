int solveTabulation(string &str1, string &str2){
    
    int m = str1.size();
    int n = str2.size();

    vector<vector<int>>dp(m+1, vector<int>(n+1,0));

    for(int i=0; i<=m; i++)
        dp[i][0] = 0;
    
    for(int i=0; i<=n; i++)
        dp[0][i] = 0;
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(str1[i-1] == str2[j-1])
                dp[i][j] = 1+dp[i-1][j-1];
        }
    }

    int ans = 0;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            ans = max(ans,dp[i][j]);
        }
    }    
    return ans;
}

int lcs(string &str1, string &str2){

    return solveTabulation(str1,str2);
    
}
