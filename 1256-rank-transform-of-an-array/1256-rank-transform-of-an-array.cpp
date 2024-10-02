class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>m;
        int i;
        vector<int>a;

        for(i=0;i<arr.size();i++){
            m[arr[i]]++;
        }

        map<int,int>::iterator it;
        
        for(it=m.begin();it!=m.end();it++){
            a.push_back(it->first);
            
        }

        map<int,int>m1;

        for(i=0;i<a.size();i++){
            
            m1[a[i]]=i+1;
        }

        for(i=0;i<arr.size();i++){
            arr[i]=m1[arr[i]];
        }


        return arr;

        

        
        
    }
};