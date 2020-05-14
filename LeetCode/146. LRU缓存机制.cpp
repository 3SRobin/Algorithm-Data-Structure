class LRUCache {
public:
    LRUCache(int capacity):cap(capacity){ }
    int get(int key) {
      int index=find(vec.begin(),vec.end(),key)-vec.begin();
      if(index==vec.size()) return -1;
      vec.erase(vec.begin()+index);
      vec.push_back(key);
      return m[key];
    }   
    void put(int key, int value) {
      int index=find(vec.begin(),vec.end(),key)-vec.begin();
      if(index<vec.size()) vec.erase(vec.begin()+index);
      else if(vec.size()==cap) vec.erase(vec.begin());
      vec.push_back(key);
      m[key]=value;
   }
private:
   vector<int> vec;
   map<int,int> m;
   int cap;
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
 
 
 
