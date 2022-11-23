class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            else if(temp!="")
            {
                if(ans==""){
                    ans=temp;
                }
                else{
                    ans=temp+" "+ans;
                    
                }
                temp.clear();
                
            }
        } 
            
         if(temp != "") {
            if(ans != "") ans = temp + " " + ans;
            else ans = temp;
        }
        
           

        
        return ans;
                
    }
    
        /* int i = 0, N = s.length();
        string buffer = "", res = "";

        for(int i = 0; i < N; i++) {
            char ch = s[i];

            if(ch != ' ') buffer += ch;
            else if(buffer != "") { // only if there's something in buffer
                if(res == "") res = buffer;
                else res = buffer + " " + res; // add word before prev with a space
                buffer.clear();
            }
        }
        if(buffer != "") {
            if(res != "") res = buffer + " " + res;
            else res = buffer;
        }

        return res;
    }*/
    
};
            
            
            

        
        
       
        
        
