#include <iostream>
#include <set>
#include <cmath>
using namespace std;
#include <vector>
class Solution{
public:
    static int maxProduct(vector<int>& nums){
        int n = nums.size();
        int product = 1;
        int minNegetive = 0;
        int ncount = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0) continue;
            if(nums[i] < 0 ){
                ncount++;
                minNegetive = min(minNegetive, nums[i]);
            }
            product *= nums[i];
        }
        if(ncount % 2 != 0){
            product /= minNegetive;
        }
        return product;
    }
};

int main(){
    vector<int> testcase = {4, 5, 3, 7, 1, 2};
    int expected = 840;
    int result = Solution::maxProduct(testcase);
    cout << (expected == result )<< '\n';
}
