class Solution {
public:
    int minAddToMakeValid(string s) {
        int lft_count=0;
         int rgt_count=0;

         if(s.size()==0) return lft_count;

         for( int i=0;i<s.size();i++)
         {
            if(s[i]=='(' ) lft_count++;
            else if(lft_count>0) lft_count--;
            
            else  rgt_count++;

         }
         return {lft_count+rgt_count};

        
    }
};