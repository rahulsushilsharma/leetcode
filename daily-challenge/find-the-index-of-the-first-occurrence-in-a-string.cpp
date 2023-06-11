class Solution {
public:
  int strStr(string haystack, string needle) {
    int i = 0;
    int j = 0;
    int k = 0;
    int flag = 0;
    int cur = 0;
    int n = haystack.size();
    int m = needle.size();
    while(i<n && j<m){
        if(haystack[i] == needle[0]){
            flag = 0;
            cur = i;
            j = i;
            while(k<m){
                if(j>=n)return -1;
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