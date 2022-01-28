iclass Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> tempContainter;

    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (target == nums[i] + nums[j])
            {
                tempContainter.push_back(i);
                tempContainter.push_back(j);
               
                
            }
        }
    }

    return tempContainter;    
        
        
        
    }
};
