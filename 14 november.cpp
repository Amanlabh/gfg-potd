class Solution
{
private : 
  long long findHashValue(string &s,int start,int end)
  {
      int mod = 1e9+7;
      long long hashValue = 0,base = 1;
      for(int i = end-1; i >= 0; --i)
      {
          hashValue = (hashValue + 1LL*(s[i]-'a'+1)*base)%mod;
          base = (1LL*base*31)%mod;
      }
      return hashValue;
  }
public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        string s = s1 + s1;
        int n = s.length(), m = s2.length();
        long long patternHash = findHashValue(s2,0,m);
        long long subStringHash = findHashValue(s,0,m);
        if(patternHash == subStringHash) return true;
        int mod = 1e9 + 7;
        long long highestValue = 1;
        for(int i = 0; i < m; ++i)
           highestValue = (1LL*highestValue * 31)%mod;
        for(int i = m; i < n; ++i)
        {
            subStringHash = ( (1LL*subStringHash*31)%mod - (1LL*(s[i-m]-'a'+1)*highestValue)%mod + 
            (s[i]-'a'+1)%mod + mod)%mod;
            if(subStringHash == patternHash) return true;
        }
        return false;
    }
};
