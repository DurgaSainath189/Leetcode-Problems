#include<bits/stdc++.h>
class Solution {
public:
    bool no_of_hrs(vector<int> &piles,int mid,int h){
        long long no_hrs=0;
        for(int i=0;i<piles.size();i++){
            no_hrs+=ceil((double)piles[i]/(double)mid);
            if(no_hrs>h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int> &piles, int h) {
        int ma=INT_MIN;
        for(int i=0;i<piles.size();i++){
            ma=max(ma,piles[i]);
        }
        int low=1,high=ma;
        while(low<=high){
            int mid=(low+high)/2;
            if(no_of_hrs(piles,mid,h)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};