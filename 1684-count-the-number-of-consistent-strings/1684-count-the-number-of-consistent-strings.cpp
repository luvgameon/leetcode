class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<int> s;
        for(int i=0;i<allowed.size();i++)
        {
            s.insert(allowed[i]);
        }
       
        int count=0;
        for(int j=0;j<words.size();j++)
        {
             bool flag=true;
            
            for(int k=0;k<words[j].size();k++)
            {
                if(s.find(words[j][k])!=s.end())
                {
                    flag=true;
                }
                else{flag=false;
                    break;
                }
                
            }
            if(flag==true)
                count++;
            
        }
        return count;
    }
};