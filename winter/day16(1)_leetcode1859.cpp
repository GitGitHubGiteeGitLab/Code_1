class Solution {
public:
    string sortSentence(string s) {
        vector<string> vec;
        vec.reserve(9);
        size_t prevPos = 0;
        size_t pos = 0;
        for(pos = s.find(' ', prevPos); pos != string::npos; prevPos = pos + 1, pos = s.find(' ', prevPos)){
            vec.push_back(s.substr(prevPos, pos - prevPos));
        }
        vec.push_back(s.substr(prevPos));
        //自定义排序
        sort(vec.begin(),vec.end(), [&](const string& x, const string& y)->bool{
            return x.back() < y.back();
        });
        string ret;
        ret.reserve(s.size());
        for(auto &e : vec){
            e.back() = ' ';
            ret += e;
        } 
        ret.pop_back();
        return ret;
    }
};