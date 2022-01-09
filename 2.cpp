#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
    int threeSumClosest(vector<int>& nums, int target) {
     
        int n = nums.size(), j, k, res = nums[0] + nums[1] + nums[2], curr;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++) {
            j = i + 1, k = n - 1;
            
            while (j < k) {
                curr = nums[i] + nums[j] + nums[k];
                if (abs(curr - target) < abs(res - target)) 
                    res = curr;
                
                if (curr < target) j++;
                else k--;
                    
            }
        }
        return res;
    }
int main()
{
	vector <int> ans;
   int n;
   cin>>n;
   
   for(int i=0;i<n;i++)
   {  int num;
   cin>>num;
	   ans.push_back(num);
   }
   int n1;
   cin>>n1;
   cout<<threeSumClosest(ans,n1);
	return 0;
}