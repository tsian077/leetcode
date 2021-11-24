
// #input 從一串輸入的數字中，找出重複出現兩次的數值，並輸出。
// #output 輸出重複的數字
// #解題思路 透過一個for迴圈用map統計出現的次數，在從map中找出重複次的
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        map<int, int> ans;
        vector<int> output;
        map<int, int>::iterator it;
        
        for(int i=0;i<nums.size();i++){
            // printf("%d",nums[i]);
            if(ans[nums[i]]==0)
            {
                 ans[nums[i]]=1;
               
            }
            else{
                
                 ans[nums[i]]=ans[nums[i]]+1;
               
            }
            
        }
        for (it = ans.begin(); it != ans.end(); it++)
        {
            if(it->second == 2){
                output.push_back(it->first);
            }

        }
        

//          for(int i=0;i<output.size();i++){
//             printf("%d",output[i]);
//         }

         return output;
        
    }
   
};