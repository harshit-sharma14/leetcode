// Last updated: 5/12/2025, 12:00:55 AM
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if((arr[i]%2!=0) && (i+2<arr.size())){
                if((arr[i+1]%2!=0) && (arr[i+2]%2!=0)){
                    return true;
                }
            }
        }
        return false;
    }
};