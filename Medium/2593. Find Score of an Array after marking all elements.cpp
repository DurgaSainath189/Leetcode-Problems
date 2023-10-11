class Solution {
public:
    long long findScore(vector<int>& a) {
        vector<pair<int,int>>v;
        for(int i=0;i<a.size();i++){
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        map<int,int>m;
        long long ans=0;
        for(int i=0;i<v.size();i++){
              if(!m[v[i].second]){
                  ans += v[i].first;
                  int x=v[i].second;
                  m[x-1]=1;
                  m[x+1]=1;
              }
        }
        return ans;
    }
};