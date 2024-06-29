

class TrieNode{

    public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    //it will check the number of new trieNodes Created
    int bodyCount;

    TrieNode(char ch ){
        data = ch;
        for(int i=0;i<26;i++)
        children[i]=NULL;

        isTerminal=false;
        bodyCount=0;
    }
};

class Trie{

    public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }

    void insert(string word){

        TrieNode* node=root;

        for(int i=0;i<word.length();i++){

            char index=word[i]-'a';

            if(!node->children[index]){
                node->children[index]=new TrieNode(word[i]);
                node->bodyCount++;
            }

                node=node->children[index];
        }

        node->isTerminal=true;
    }
    void well(string word,string &ans){
    if(word.length()==0){
        return ;
    }
    TrieNode* child;
    char ch = word[0];
    int index = ch-'a';
         if(root->bodyCount==1  && root->children[index]!=NULL){
            if(root-> isTerminal){
                return;
            }
             ans.push_back(word[0]);
            root=root->children[index];
            }
        else {
            return;
        }

    
   
        
    return well(word.substr(1),ans) ;
}

    
};



class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
       Trie* t = new Trie();
      
       for(int i=0;i<strs.size();i++){
            t->insert(strs[i]);
       }
    string ans ;
    t->well(strs[0],ans);
       return ans;
    }
};
