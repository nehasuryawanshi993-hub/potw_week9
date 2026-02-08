class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> v;
        for(int i=0;i<score.size();i++){
            v.push_back({score[i],i});
        }
        sort(v.begin(),v.end(),greater<>());
        vector<string> ans(score.size());
        int idx;
        for(int i=0;i<v.size();i++){
            idx=v[i].second;
            if(i==0)ans[idx]="Gold Medal";
            else if(i==1)ans[idx]="Silver Medal";
            else if(i==2)ans[idx]="Bronze Medal";
            else ans[idx]=to_string(i+1);
        }
        return ans;
    }
};
