class Solution {
public:
   int getMaximumGold(vector<vector<int>>& grid) {
        int result=0;
        for(int i=0;i<grid.size();i++)
           for(int j=0;j<grid[0].size();j++)
            {  
                if(grid[i][j]!=0)
                  result=max(result,fun(grid,i,j));         
            }
        return result;
    }
    
    int fun(vector<vector<int>>&nums,int r,int c)
    {
       
         // Base Case
         if(r<0 || r>=nums.size() || c<0 || c>=nums[0].size() || nums[r][c]==0)
             return 0;  
 
        
     // Pre-calculation
         int val=nums[r][c];
        int result=-1;
         nums[r][c]=0;
        result=max(fun(nums,r-1,c),result);
        result=max(fun(nums,r+1,c),result);
        result=max(fun(nums,r,c-1),result);
        result=max(fun(nums,r,c+1),result);
		
		// Do post-calculation
        nums[r][c]=val;
		
        return result+val;
         
    }
};