class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>arr1;
        
        int i;
        for(i=0;i<arr.size();i++){
            arr1.push_back(((arr[i]%k)+k)%k);
        }

        map<int,int>m;
        for(i=0;i<arr1.size();i++){
            m[arr1[i]]++;
        }

        if(m[0]%2!=0){
            return false;
        }

        for(int i = 1;i <= k / 2;i++){
            if(m[i] != m[k-i]) {
                return false;
            }
        }


        // map<int,int>::iterator it;
        // for(it=m.begin();it!=m.end();it++){
            
        // }

        return true;
    }
};