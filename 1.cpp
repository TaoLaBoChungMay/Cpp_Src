#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> _int_Map;
        
        for (int i=0; i < nums.size(); i++)
        {
        	int need = target -nums[i]; 
        	if (_int_Map.find(need) !=_int_Map.end())
        		return {i,_int_Map[need]};
        	_int_Map[nums[i]] =i;
		}
		return {};
    }
};

int main ()
{
	int n, target;
	cin >> n >> target;
	
	vector <int> nums(n);
	
	for (int i=0; i < n; i++)
		cin >> nums[i];
		
	Solution s;
	vector<int> result =s.twoSum(nums,target);
	
	for (int i=0; i < result.size(); i++)
		cout <<result[i] <<" ";
		
	return 0;
}