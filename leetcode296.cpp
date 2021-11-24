class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans(n,-1);
        
        for(int i=0;i<n;i++){
            // printf("%d",nums1[i]);
             for(int j=0;j<m;j++){
                // printf("%d",nums2[j]);
                 if(nums1[i]==nums2[j])
                 {
                     
                    
                    if(j+1>=m){
                         ans[i]=-1;
                        
                            
                     }
                    else{
                        
                     for(int k=j+1;k<m;k++){
                         if(nums1[i]<nums2[k])
                         {
                             ans[i]=nums2[k];
                             break;
                         }
                     }   
                     
                        
                    }
                    
                 }
            }
          
           
        
        }
        
       
     
        
        
        return ans;
    }
};