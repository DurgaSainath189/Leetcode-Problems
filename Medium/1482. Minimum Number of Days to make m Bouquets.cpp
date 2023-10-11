#include<bits/stdc++.h>
class Solution {
public:
    bool is_possible(vector<int> arr,int day,int m,int k){
        int no_days=0;
        int no_bouquets=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                no_days++;
            }
            else{
                no_bouquets+=(no_days/k);
                no_days=0;
            }
        }
        no_bouquets+=(no_days/k);
        return no_bouquets>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1ll*m*k*1ll>bloomDay.size()) return -1;
        int mi=INT_MAX,ma=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            mi=min(mi,bloomDay[i]);
            ma=max(ma,bloomDay[i]);
        }
        // cout<<mi<<" "<<ma;
        int low=mi,high=ma;
        while(low<=high){
            int mid=(low+high)/2;
            if(is_possible(bloomDay,mid,m,k)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};