class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> map;
        vector<int> ret(arr1.size());
        int k = 0;
        for(auto& e : arr1){
            map[e]++;
        }
        for(int j = 0; j < arr2.size(); j++){
            for(size_t i = 0, I = map[arr2[j]]; i < I; i++){
                ret[k++] = arr2[j]; 
            }
            map[arr2[j]] = 0;
        } 
        for(auto it = map.begin(), last = map.end(); it != last; ++it){
            int key = it->first, value = it->second; 
            for(int i = 0; i < value; ++i){
                ret[k++] = key;
            }
        }
        return ret;
    }
};
class Solution {
public:

    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> ranks;
        for(int i = 0, I = arr2.size(); i < I; ++i){
            ranks[arr2[i]] = i;
        } 
        sort(arr1.begin(), arr1.end(),[&](int x, int y)->bool{
            if(ranks.count(x)){
                return ranks.count(y) ? ranks[x] < ranks[y] : true;
            }else{
                return ranks.count(y) ? false : x < y;
            }
        } );
        return arr1;
    }
};