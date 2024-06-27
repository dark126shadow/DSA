class Solution {
public:
//make a hashmap
//iterate throught the string 
//add when the number is bigger 
//subtract when the number is smaller
    int romanToInt(string s) {
        map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
       int n=s.length();
        int ans = 0 ;
        for(int i=0;i<n;i++){
                if( i!=n && m[s[i]]<m[s[i+1]] ){
                    ans = ans-m[s[i]];
                }
                else{
                    ans = ans+m[s[i]];
                }
            }
        return ans;
    }
};
