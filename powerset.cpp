#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    solve(nums, output, index + 1, ans);
    int element = nums[index]; 
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
   // cout << "hello in subsets" << endl;
    
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main()

{
    vector<int> ques = {1, 2, 3};
    vector<vector<int>> ans = subsets(ques);
    sort(ans.begin(),ans.end());
    sort(ans.begin(), ans.end(), [](const vector<int> & a, const vector<int> & b){ return a.size() < b.size(); });
    cout<<"{";
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        //cout << endl;
        cout<<"}";
    }
    cout<<"}"<<endl;
    return 0;
}
