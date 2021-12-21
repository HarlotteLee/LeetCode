class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        //int tmp=nums[0];
        vector<int>::iterator i;
        for(i=nums.begin();i!=nums.end()-1;){
            if(*i==*(i+1)) {nums.erase(i);}
            else{i++;}
            
        }
        return nums.size();  

    }
};

