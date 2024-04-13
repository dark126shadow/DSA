//approach:
//find the centre of the palindrome 
//expand from the centre and that is your palindrome
//start from longest palindrom function
class Solution {
public:
string getlength(int l,int r,int st,int end,string s,string ans){
    //maintain maxlength which will track the maximum length of the palindrome
       int maxlength =1;
    //finding the center of palindrome
    while(l>=0 && r<=s.size()){
        // expanding from the centre
        if(s[l]==s[r]){
            l--,r++;
        }
        else{
            break;
        }
    }
    // length of the existing palindrom (not the longest)
int len= r-l-1;
//if existing length is greater than max length than adjust the maximum length also adjust the start and end pointer
    if(len>maxlength){
        maxlength = len;
        st=l+1;
        end=r-1;
        
    }
   //we don't use end instead of max length  because subtr function prints the word imbetween  
return s.substr(st,maxlength);
}
    string longestPalindrome(string s) {
        // for cases that have no palindromiic strings
        if(s.size()<=1){
            return s;
        }
        int n= s.size();
        //maintain two variable st and end to keep track of your string 
        int st=0;
        int end=0;
        string ans;
        string temp;
        //iterate in string 
        for(int i=0;i<n;i++){
        //maintain two pointer l and r to iterate easily
        //for odd size of string l and r will be same because odd string have only one center

        string temp1 = getlength(i,i,st,end,s,ans);
        //for even size of string l wil be i and r will be i+1 because even string have two centers
        string temp2 =  getlength(i,i+1,st,end,s,ans);
        // compare the sizes of two variables 
        if(temp1.size()>temp2.size() ){
            //add the sizes to temp
            temp = temp1;
        }
       else{
        temp = temp2;
       }
       //compare the size of temp to ans so  we can obtain longest palindromic string
       if(temp.size()>ans.size()){
        ans= temp;
       }
        }
        return ans;
    }
};
