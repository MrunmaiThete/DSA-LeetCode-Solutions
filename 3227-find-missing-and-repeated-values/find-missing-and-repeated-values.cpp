class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
     unordered_set<int> s;
     vector<int> ans;
     int a,b;
     int exp_sum=0;
     int actual_sum=0; 
     int n=grid.size(); 

     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            actual_sum += grid[i][j];
            if(s.find(grid[i][j]) != s.end())
            {
                a=grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
     } 
     exp_sum=(n*n)*(n*n + 1)/2;
     b=exp_sum-actual_sum+a;
     ans.push_back(b);
     return ans;     
    }
};

/*
In Java :

class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        Set<Integer> set = new HashSet<>();   // instead of unordered_set
        int[] ans = new int[2];              // instead of vector<int>
        int a = 0, b = 0;
        int exp_sum = 0;
        int actual_sum = 0; 
        int n = grid.length;                 // in Java use .length

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actual_sum += grid[i][j];
                if (set.contains(grid[i][j])) {
                    a = grid[i][j];          // repeated number
                    ans[0] = a;
                }
                set.add(grid[i][j]);
            }
        }

        exp_sum = (n * n) * (n * n + 1) / 2;
        b = exp_sum - actual_sum + a;        // missing number
        ans[1] = b;

        return ans;  
    }
};

*/