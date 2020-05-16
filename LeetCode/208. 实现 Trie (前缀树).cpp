class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
      for(int i=0;i<26;i++)
        vec.push_back(NULL);
    }
    /** Inserts a word into the trie. */
    void insert(string word) {
      Trie *pos=this;
      for(auto i:word)
      {
         if(pos->vec[i-'a']==NULL)
           pos->vec[i-'a']=new Trie();
         pos=pos->vec[i-'a'];
      }
      pos->update=true;
    }
    /** Returns if the word is in the trie. */
    bool search(string word) {
      Trie *pos=this;
      for(auto i:word)
      {
         if(pos->vec[i-'a']==NULL) return false;
         pos=pos->vec[i-'a'];
      }
      return pos->update;
    }
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
      Trie *pos=this;
      for(auto i:prefix)
      {
         if(pos->vec[i-'a']==NULL) return false;
         pos=pos->vec[i-'a'];
      }
      return true;
    }
private:
    vector<Trie*> vec;
    bool update=false; 
};


/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
 
 
 
