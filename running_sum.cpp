#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};

int main() {
    cout<<"Executing the program"<<endl;
    return 0;
}
