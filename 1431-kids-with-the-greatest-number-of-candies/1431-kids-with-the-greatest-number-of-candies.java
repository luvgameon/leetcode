class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
       List<Boolean> ans=new ArrayList<>();
     for(int i=0;i<candies.length;i++)
     {
         Boolean test =true;
         for(int j=0;j<candies.length;j++)
         {
             if((candies[i]+extraCandies)<candies[j])   
             {
                 test=false;
                 break;
             }
         }
         if(test)
         {
             ans.add(true);
         }
         else
         {
             ans.add(false);
         }
         }
         return ans;
     }
}