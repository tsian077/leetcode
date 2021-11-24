class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<2)return s;
        
        int n = s.length();
        // printf("%d",n);
        int max=-1;
        string ss="";
        for(int i =0;i<n-1;i++){
            
            int left = i-1;
            int right = i+1;

            //基數長度            
            while(right <= n && left>=0 && s[left]==s[right]){
                // printf("%c=%c",s[left],s[right]);
                left-=1;
                right+=1;
             
                // printf("\n");
                // printf("1_max:%d",max);
                // printf("1_rl:%d",right-left);
                // std::cout<<s.substr(left+1,right-left-1);
                if(max<(right-left))
                {
                    ss = s.substr(left+1,right-left-1);
                    max = right-left;
                }
                
            }
            
            left = i;
            right= i+1;
            
            //偶數長度
            while(right <= n && left>=0 && s[left]==s[right]){
                // printf("\n");
                // printf("%c=%c",s[left],s[right]);
                // std::cout<<"left:"<<left<<"right"<<right<<" ";
                // std::cout<<"left_x:"<<s[left]<<" "<<"right_x"<<right<<" ";
                // printf("2_max:%d",max);
                
                // printf("2_rl:%d",right-left);
                
                left-=1;
                right+=1;
                // std::cout<<s.substr(left-1,right-left+1);
                
                
                // std::cout<<s.substr(left+1,right-le);
                if(max<(right-left))
                {
                    ss = s.substr(left+1,right-left-1);
                    max = right-left;
                }
                
            }
            if(max<0){
                ss = s[0];
            }

            
            // std::cout<<"i"<<i;
            
            
            
            // if(right-left > max)
            // std::cout<<"\n";
            // std::cout<<"left"<<left;
            // std::cout<<"right"<<right;
            // std::cout<<"max"<<right-left;
            
            // std::cout << ss;
            
        }
        
        
        return ss;
    }
    
    
};
