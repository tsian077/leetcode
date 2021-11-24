class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n+1,0);
        vector<int> ans2;
        //統計所有的值
        for(int i=0;i<n;i++){
            ans[nums[i]]=1;
        }
        //找出沒有出現過的值
        for(int i =1;i<=n;i++){
            // cout<<"value:"<<ans[i]<<"\n";
            
            if(ans[i]!=1){
                 // cout<<"zero:"<<i;
                 ans2.push_back(i);
                
            }
               
        }
        return ans2;
       
        
    }
};
