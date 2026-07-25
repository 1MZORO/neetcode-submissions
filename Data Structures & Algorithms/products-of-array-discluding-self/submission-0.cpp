class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out;
        int j=0;
        for(int i=0; i<nums.size(); i++){
            int prod = 1;
            for(int j=0; j<nums.size(); j++){
            if(i != j){
                prod = prod * nums[j];
            }}
            out.push_back(prod);
        }
    return out;
    }

};
