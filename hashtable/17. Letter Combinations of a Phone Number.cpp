class Solution {
public:


    vector<string> letterCombinations(string digits) {
//make a hasmap
        map<char,string>m;
        //ans vector
        vector<string> ans;
        //base case
        if(digits.length()==0){
            return ans;
        }
//input the values
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        //calling the back track function
      backtrack(digits,0,m,"",ans);
     return ans;   
    }
    //define an index that will tell us on which part of the number we are on 
    void backtrack(string &digits,int idx ,map<char,string> m,string temp,vector<string>&ans){
        // we our idx is same as the length then it means that we have the compination for that case
    if(idx==digits.length()){
        ans.push_back(temp);
        return;
    }
    //store the string in letters
    string letters = m[digits[idx]];
    //iterate throught letter in letters
    for(char letter:letters){
        //adding the letter to our temp strign and once the idx equals the digits lenth pushing it into the  vector
        backtrack(digits,idx+1,m,temp+letter,ans);
    }

    }
};
