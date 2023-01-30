

                                                                // Monotonic Array  //




class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increase=0,decrease=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]<nums[i+1])
            increase++;
            else if(nums[i]>nums[i+1])
            decrease++;
            else
            {
                increase++;
                decrease++;
            }
        }
        cout<<decrease<<endl;
        cout<<increase<<endl;
        if(increase==nums.size()-1 || decrease==nums.size()-1)
        return true;
        else
        return false;
        
        
    }
};
