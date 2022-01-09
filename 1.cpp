#include <iostream>
using namespace std;
#include <vector>
int missingNumber(vector<int>& nums)
{
  int sum = 0;
        int total = nums.size()*(nums.size() + 1)/2;
        for (auto number : nums) {
            sum += number;
        }
       
	          return total - sum;
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
   cout<<missingNumber(ans);
	return 0;
}