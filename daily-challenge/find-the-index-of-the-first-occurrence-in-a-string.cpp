class Solution {
public:
  int strStr(string haystack, string needle) {
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<haystack.size() && j<needle.size()){
        if(haystack[i] == needle[0]){
            int flag = 0;
            int cur = i;
            j = i;
            while(k<needle.size()){
                if(j>=haystack.size())return -1;
                if(haystack[j]!=needle[k]){
                    j=0;
                    k = 0;
                    flag=1;
                    break;
                }
                k++;
                j++;

            }
            if(flag != 1)return cur;
        }
        i++;
    }
    return -1;
  }
};