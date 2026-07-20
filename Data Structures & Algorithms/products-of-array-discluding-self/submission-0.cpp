class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int  mul = 1;
        int cnt = -1;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            if(cnt == -1 && nums[i] == 0){
                cnt = i;
                continue;
            }
            else if(nums[i] == 0){
                cnt = -2;
                break;
            }
            mul *= nums[i];

        }    

        vector<int> ans(n);
        for(int i = 0 ; i < n ; i++){
            if(cnt == -2){
                ans[i] = 0;
            }
            else if(cnt != -1){
                ans[i] = i != cnt ? 0 : mul;
            }
            else{
                ans[i] = mul/nums[i];
            }
        }

        return ans;
    }
};