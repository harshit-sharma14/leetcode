// Last updated: 4/28/2025, 9:35:58 PM
class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        int sum=0;
        arr=nums;
        for(int i=0;i<nums.size();i++){

        

        arr[i]=sum+nums[i];
        sum+=nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return arr[right];
        }
        return arr[right]-arr[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */