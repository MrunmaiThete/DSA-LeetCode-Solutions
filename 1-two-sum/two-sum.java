class Solution 
{
    public int[] twoSum(int[] nums, int target) 
    {
    int[] arr=new int[2];
    for(int i=0;i<nums.length;i++)
    {
        for(int j=i+1;j<nums.length;j++)
        {
           if(nums[i]+nums[j]==target)
           {
               arr[0]=i;
               arr[1]=j;  
           }
        }
    }  
    return arr;
    }
}
 
/*
In C++ :

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
     unordered_map<int,int> m;
     vector<int> ans;
     
     for(int i=0;i<nums.size();i++)
     {
        int first=nums[i];
        int sec=target-first;
       
        if(m.find(sec)!=m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first]=i;
     }
     return ans;
    }
};

*/