#include <iostream>  
#include <string>
#define int long long
using namespace std;
 


#include <vector>
using namespace std;

int matrixScore(vector<vector<int>>& nums) {
    int score = 0;
    
    while (!nums.empty()) {
        vector<int> max_row_vals;
        for (auto& row : nums) {
            int max_val = *max_element(row.begin(), row.end());
            max_row_vals.push_back(max_val);
        }
        int max_val = *max_element(max_row_vals.begin(), max_row_vals.end());
        score += max_val;
        
        for (auto& row : nums) {
            auto it = find(row.begin(), row.end(), max_val);
            if (it != row.end()) {
                row.erase(it);
            }
        }
        
        nums.erase(remove_if(nums.begin(), nums.end(),
                             [](const vector<int>& row){ return row.empty(); }),
                   nums.end());
    }
    
    return score;
}


int main(){
   vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout<<matrixSum(vect);
}