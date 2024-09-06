class Solution {
public:
//build a stack 
//build a vector
// whenever the closing bracket matches the top of the stack label both of them 1
//if there is zero  reset the value 

    int longestValidParentheses(string s) {
        int ans=0;
        int ansd=0;
        vector<int> arr(s.length(),0);
        stack<char> st;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
          
            }
            else if(!st.empty()&&s[i]==')'){
                if(st.top()=='('){
                    arr[i]=1;
                    if(arr[i-1]!=1){
                    arr[i-1]=1;
                    }
                    else{
                        int temp =i;
                        while(arr[temp]!=0){
                            temp--;
                        }
                          if(arr[temp]!=1){
                    arr[temp]=1;
                    }
                        
                        
                    }
                    
                    st.pop();
                }
               
            }
        }
        for(int i = 0;i<arr.size();i++){
            
            if(arr[i]==0){
        
            ansd =0;
            }
            else{
          ansd = ansd + arr[i];
            }
            ans = max(ans,ansd);
        }
      
    return ans;
    }
};
