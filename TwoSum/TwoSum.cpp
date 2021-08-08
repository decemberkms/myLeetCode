#include <iostream>
#include <vector>


using namespace std;


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

int main()
{
    vector<int> myvector{ 3,3};
    int mytarget{6};


    
    for (auto ele : twoSum(myvector, mytarget))
    {
        cout << ele << endl;
    }

	return 0;
}