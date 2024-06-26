class Solution {
public:
//create a hashmap 
//create a string including the different numbers of a hashmap

    string intToRoman(int num) {
        map<int,string> m;
        m[1]="I";
        m[4]="IV";

        m[5]="V";
        m[9]="IX";
        m[10]="X";
        m[40]= "XL";
        m[50]="L";
        m[90]="XC";
        m[400]="CD";
        m[500]="D";
        m[100]="C";
        m[900]="CM" ;        
        m[1000]="M";
        int count=0;
        string ans="";
         int a[20] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
      
    for(int i=0;i<13;i++){
        if(num/a[i]>0){
            count=num/a[i];
            for(int j=0;j<count;j++){
                ans+=m[a[i]];
            }
            num=num%a[i];
        }
    }
    return ans;
    }
};
