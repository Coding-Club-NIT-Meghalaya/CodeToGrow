
string longestPalindrome(string s) {
        string r="";
        if(!s.size())
            return r;
      int n=s.size();
        int dp[n][n];
        int st=0,e=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    dp[i][j]=1;
                else
                    dp[i][j]=0;
            }
        }
        int maxx=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                dp[i-1][i]=1;
                maxx=2;
                st=i-1,e=i;
            }
        }
        for(int j=2;j<n;j++)
        {
            for(int i=0;i<j-1;i++)
            {
                if(dp[i+1][j-1] && s[i]==s[j])
                {
                    if(maxx<j-i+1)
                    {
                    maxx=max(maxx,j-i+1);
                        st=i,e=j;
                    }
                    dp[i][j]=1;
                }
            }
        }
        cout<<st<<" "<<e<<"\n";
        for(int i=st;i<=e;i++)
            r+=s[i];
        return r;
    }  