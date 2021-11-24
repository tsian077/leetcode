//解題思路:透過一個start指標，當找到重複的字元時，則會更新其指向的位置，並指向前一個重複字元的位置。
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vec(256,-1);
        int n=s.size();
        int logest=0;
        int start=-1;
        for(int i=0;i<n;i++)
        {
            std::cout<<"i:"<<i<<" value:"<<s[i]<<"\n";
            //"abcabcbb"
            //用start來指出目前還沒有重複字元的起始點，如還沒有重複的值，那vec[s[i]]一直都不會大於start
            // ex:在一開始的vec中的值都會是-1，而start也會一直為-1，所以不會進入if裡面去更改start裡的值             //例如在第一個a時，start=-1，b start=-1, c start=-1，但是當遇到第二個'a'時，vec[“a”]裡
            //的值則會是0，會大於start，因此會更新start的值為0，而當遇到第二個'b'時，也會將start更新為1
            //遇到第二個'c'時，則會將其更新為2，而目前的最長子串列為(5-2)=3。
            if(vec[s[i]] > start) 
                start=vec[s[i]];
            std::cout<<"start"<<start<<"\n";
            // std::cout<<"before_vecsi:"<<vec[s[i]]<<"\n";
            vec[s[i]]=i;
            std::cout<<"after_vecsi:"<<vec[s[i]]<<"\n";
            logest = max(logest,i-start);
            
        }
        
        return logest;
    }
    
    
};