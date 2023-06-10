class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j = 0;
        int flag = 1;
        int cur = 0;

        while(i<haystack.size()){
            cur = 0;
            
            if(haystack[i] == needle[0]){
                cur = i;
                flag = 0;
                while(j<needle.size() && i<haystack.size()){
                    cout<<haystack[i]<<' '<<needle[j]<<endl;
                    if(haystack[i++] != needle[j++]){flag = 0;cout<<"break"<<endl;break;}
                }
                if(flag==0 || i>=haystack.size())return cur;
                j = 0;
            }
        }
        return -1;
    }
};