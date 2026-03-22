class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int> v;
        for(auto it=nums.begin();it!=nums.end();it++){
            for(auto i=it+1;i!=nums.end();i++){
                if((*it) + (*i) ==target){
                    v.push_back(it-nums.begin());
                    v.push_back(i-nums.begin());
                    break;
                }
                    
            }
        }
        return v;
    }
};

   


