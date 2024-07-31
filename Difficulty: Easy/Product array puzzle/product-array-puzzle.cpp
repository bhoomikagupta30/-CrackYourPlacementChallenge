//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        vector<long long int>nums2;
        vector<long long int>ans;
        int i,j;
       
        if(n>1){
        for(i=0;i<nums.size();i++){
            nums2.push_back(nums[i]);
        }

        for(i=1;i<nums.size();i++){
            nums[i]=nums[i]*nums[i-1];
        }
       
        for(i=nums2.size()-2;i>=0;i--){
            nums2[i]=nums2[i]*nums2[i+1];
        }

        ans.push_back(nums2[1]);

        i=0;
        j=2;

        while(i<nums.size()-2){
           ans.push_back(nums[i]*nums2[j]);
           i++;
           j++;
        }

        ans.push_back(nums[i]);

        return ans;
        }
        else{
            return {1};
        }





















    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends