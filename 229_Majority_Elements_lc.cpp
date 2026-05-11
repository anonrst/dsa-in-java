#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result = {};
        unordered_map<int, int> counts = {};
        int target = nums.size() /3;
        for(int i: nums){
            if(counts.contains(i)){
                counts[i] = counts.at(i) + 1;
            }else{
                counts[i] = 1;
            }
        }
        for(auto& entry: counts){
            int c = entry.second;
            if(c > target){
                result.push_back(entry.first);
            }
        }
        return result;
    }
};

int main(){
    vector<int> testcase = {3,2,3};
    Solution* s = new Solution();
    vector<int> r = s->majorityElement(testcase);
    cout << r.at(0)<< '\n';
    return 0;
}