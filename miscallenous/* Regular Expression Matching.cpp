class Solution {
public:
//break the problem into smaller parts and solve it
    bool isMatch(string s, string p) {
        return dfs(s.length()-1,p.length()-1,s,p);
    }
    bool dfs(int i,int j,string s,string p){
        //base cases
        if(i<0 && j<0){
            return true;
        }
        if(j<0){
            return false;
        }
        if(i<0){
            if(p[j]=='*'){
                return dfs(i,j-2,s,p);
            }
            else{
                return false;
            }

        }
       if(p[j]=='*'){
                bool res = false;

        if(p[j-1]==s[i] || p[j-1]=='.'){
          res = res||dfs(i-1,j,s,p);
        }
        
            return res||dfs(i,j-2,s,p);


       }
       if(s[i]==p[j] || p[j]=='.'){
        return dfs(i-1,j-1,s,p);
       }
       return false;
      }

};
