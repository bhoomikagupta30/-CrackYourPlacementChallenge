class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,c=0,k;

for(i=0;i<nums.size();i++){

if(nums[i] == target){

c=1;
k=i;
break;

}






}

if(c==0){

if(target < nums[0]){
    k=0;
}
else{

for(i=0;i<nums.size();i++){

if(target > nums[i]){

k=i+1;;

}




}

}

}

return k;

}

};