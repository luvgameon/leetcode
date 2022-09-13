class Solution {
public:
    int countPrimes(int n) {
          int count=0;
        vector<bool> prime(n+1,true);
            prime[1]=prime[0]=false;
        for(int i=2;i<n;i++)
        {
            if(prime[i])
             {
                count++;
             }
            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
        }
        return count;
        
        
    }
};