class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string> >m;
        for(auto x:strs)
        {
            string s=x;
            sort(s.begin(),s.end());
            m[s].push_back(x);
            int k=2;
        }
        vector<vector<string> > ans;
        for(auto x:m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
