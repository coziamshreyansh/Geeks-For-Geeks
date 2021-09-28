// used dp as ques involves choices
public:
    long long noOfWays(int M , int N , int X) {
        // here you are given with choices to select numbers from 1 to M
        // so dp might work
        long long dp[N+1][X+1];
        // handling base cases
        memset(dp, 0, sizeof(dp));
        for(int i=1;i<=X&&i<=M; i++)
            dp[1][i] = 1;
        for(int i=2; i<=N;i++)
            for(int j=1;j<=X;j++)
                for(int k=1;k<=M&&k<j;k++)
                    dp[i][j] += dp[i-1][j-k];
        return dp[N][X];
        
    }
