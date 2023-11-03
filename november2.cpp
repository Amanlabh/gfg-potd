class Solution{
public:
    // Function to check if the
        bool checkTriplet(int arr[], int n) 
    {
        
        int max = INT_MIN;
        
        unordered_map<int, int> m;
        
        for(int i = 0; i<n; i++)
        {
            m[arr[i]*arr[i]] = 1;
        }
        
        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                int idx = arr[i]*arr[i];
                
                int idy = arr[j]*arr[j];
                
                if(m[idx+idy]) return true;
            }
        }
        
        return false;
    }
    }
;
