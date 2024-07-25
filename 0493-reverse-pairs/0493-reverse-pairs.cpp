class Solution {
public:

    void partition(vector<int>&nums,int l,int n,int &count){
        int mid=(l+n)/2;
        
        // int x=mid-l+1;
        // int y=n-mid;
        // int a[x];
        // int b[y];

        // for(int i=0;i<x;i++){
        //     a[i]=nums[i+l];
        // }

        // for(int i=0;i<y;i++){
        //     b[i]=nums[mid+i+1];
        // }

        // int i,j;
        // for(i=0;i<x;i++){
            
        //     while(j<y && a[i]>2*(long)b[j]){
        //          j++;
        //     }
        //     count=count+(j);
        // }

        // int k=0;
        
        // i=0;
        // j=0;
        
        // while(i<x && j<y){

        //     if(a[i]<=b[j]){
        //         nums[k]=a[i];
        //         i++;
        //         k++;
        //     }
        //     else{
        //         nums[k]=b[j];
        //         j++;
        //         k++;
        //     }
        // }

        // while(i<x){
        //     nums[k]=a[i];
        //     i++;
        //     k++;
        // }

        // while(j<y){
        //     nums[k]=b[j];
        //     j++;
        //     k++;
        // }

        int j = mid+1;
        for(int i=l; i<=mid; i++){
            while(j<=n && nums[i] > 2*(long long)nums[j]){
                j++;
            }
            count += j-(mid+1);
        }
        int size = n-l+1;
        vector<int> temp(size, 0);
        int left = l, right = mid+1, k=0;
        while(left<=mid && right<=n){
            if(nums[left] < nums[right]){
                temp[k++] = nums[left++];
            }
            else{
                temp[k++] = nums[right++];
            }
        }
        while(left<=mid){
            temp[k++] = nums[left++]; 
        }
        while(right<=n){
            temp[k++] = nums[right++]; 
        }
        int m=0;
        for(int i=l; i<=n; i++){
            nums[i] = temp[m++];

        




    }

    }

    
    
    
    
    
    
    
    
    
    void mergesort(vector<int>&nums,int l,int n,int &count){
          
          if(l<n){

            int mid=(l+n)/2;
            mergesort(nums,l,mid,count);
            mergesort(nums,mid+1,n,count);
            partition(nums,l,n,count);
          }

          
    }


    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;

        mergesort(nums,0,n-1,count);

        return count;


    }
};